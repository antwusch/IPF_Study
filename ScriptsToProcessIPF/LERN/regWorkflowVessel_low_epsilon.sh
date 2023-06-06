
bin_path="/home/exacloud/gscratch/BayouthLab/src/LungReg/groupCode/"
powervault_path="/PowerVault/"

#inputs
#############################
#subject="IPF010"
#kernel="B50f_1mm"
if [ $# -ne 6 ]; then
  echo "Usage: $0 subject kernel scanA scanAmove scanAfix ep"
  exit 1
fi
subject=$1
kernel=$2
echo $subject

scanA=$3
scanAFix=$5
scanAMove=$4
ep=$6
##############################

CT_input_path="/home/exacloud/gscratch/BayouthLab/DataToProcess/${subject}/"
mask_input_path="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanA}/lung/alpha/"
output_base="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/RegistrationWithVessel_Low_Epsilon_${ep}/"


deltarzero=2
deltaDzero=0.06
searchRadius=$(($deltarzero+1))
samplingrate=10


#parallel -j 3 --ungroup --progress --verbose sh /PowerVault/IPF_Study/working/script/runRegistrationVessel_low_smooth.sh ::: ${subject} ::: ${CT_input_path} ::: ${mask_input_path} ::: ${output_base} ::: $scanA $scanB $scanB :::+ $scanAMove $scanBFix $scanBMove :::+ $scanA $scanA $scanB :::+ $scanAFix $scanAFix $scanBFix

sh /home/exacloud/gscratch/BayouthLab/ScriptsToProcessIPF/LERN/runRegistrationVessel_low_epsilon.sh ${subject} ${CT_input_path} $mask_input_path $output_base $scanA $scanAMove $scanA $scanAFix $ep

####################### Coordinate warp #######################
for n in 1;
do
   echo $n

if [ $n -eq 1 ]
   then	
	fixed_scan=$scanA
	moving_scan=$scanA
	fixed="${scanA}_${scanAFix}"
	moving="${scanA}_${scanAMove}"
	echo fixed = $fixed
	echo moving = $moving
fi

if [ $n -eq 2 ]
   then
	fixed_scan=${scanA}
	moving_scan=${scanB}
	fixed="${scanA}_${scanAFix}"
	moving="${scanB}_${scanBFix}"
	echo fixed = $fixed
	echo moving = $moving
fi


if [ $n -eq 3 ]
   then
	fixed_scan=${scanB}
	moving_scan=${scanB}
	fixed="${scanB}_${scanBFix}"
	moving="${scanB}_${scanBMove}"
	echo fixed = $fixed
	echo moving = $moving
	moving_warp=$fixed
	fixed_warp="${scanA}_${scanAFix}"
	fixed_warp_scan=${scanA}
fi




result_folder="${output_base}/${moving}_to_${fixed}/"


moving_input="${CT_input_path}/${scanA}/"
fixed_input="${CT_input_path}/${scanA}/"
movingImage="${moving_input}/${subject}_${moving}.nii.gz"
fixedImage="${fixed_input}/${subject}_${fixed}.nii.gz"

moving_mask_input="${mask_input_path}/"
fixed_mask_input="${mask_input_path}/"
movingMask="${moving_mask_input}/${subject}_${moving}.mask.nii.gz"
fixedMask="${fixed_mask_input}/${subject}_${fixed}.mask.nii.gz"


#####################-----------combine disp-----------#######################

transformationname="${moving}_to_${fixed}"
normalize_image="0"
suffix="_2_2_2_4_4_4.nii.gz"
disp1="${result_folder}/Disp12_x${suffix}"
disp2="${result_folder}/Disp12_y${suffix}"
disp3="${result_folder}/Disp12_z${suffix}"
output_file="${result_folder}/${subject}_${transformationname}_displacementField.mha"
${bin_path}/CombineDisplacementForSSTVD.exe -in1 ${disp1} -in2 ${disp2} -in3 ${disp3} -out ${output_file} -normaldirection ${normalize_image}



#####################-----------calculate Jacobian-----------#######################
if [ $n -eq 1 ] || [ $n -eq 3 ]
then
output_file="${result_folder}/${subject}_${transformationname}_Jacobian.masked.nii.gz"
/home/exacloud/gscratch/BayouthLab/src/LungReg/lungreg-bld/ireg-sstvd-vm/bin/calcJacMasked ${disp1} ${disp2} ${disp3} ${output_file} ${fixedMask}
output_file="${result_folder}/${subject}_${transformationname}_Jacobian.nii.gz"
/home/exacloud/gscratch/BayouthLab/src/LungReg/lungreg-bld/ireg-sstvd-vm/bin/calcJac ${disp1} ${disp2} ${disp3} ${output_file}

fi

#####################-----------warp 100IN-----------#######################
if [ $n -eq 1 ] || [ $n -eq 3 ]
then
warpName="${moving}_to_${fixed}"

normalize_image="0"

disp="${result_folder}/${subject}_${warpName}_displacementField.mha"

outputfixedimage="${result_folder}/${subject}_${moving}_warped_to_${fixed}.nii.gz"
${bin_path}/WarpImage.exe -in ${movingImage} -dfield ${disp} -out ${outputfixedimage} -normaldirection ${normalize_image} -intertype "l"
fi 
if [ $n -eq 3 ]
then
warpName="${moving_warp}_to_${fixed_warp}"

normalize_image="0"

disp="${output_base}/${moving_warp}_to_${fixed_warp}/${subject}_${warpName}_displacementField.mha"


outputfixedimage="${result_folder}/${subject}_${transformationname}_Jacobian_warped_to_${fixed_warp}.nii.gz"

unmaskedJac_file="${result_folder}/${subject}_${transformationname}_Jacobian_unmasked.nii.gz"
/home/exacloud/gscratch/BayouthLab/src/LungReg/lungreg-bld/ireg-sstvd-vm/bin/calcJac ${disp1} ${disp2} ${disp3} ${unmaskedJac_file}

${bin_path}/WarpImage.exe -in ${unmaskedJac_file} -dfield ${disp} -out ${outputfixedimage} -normaldirection ${normalize_image} -intertype "l"
fi
done



chmod -R 777 ${result_folder}
