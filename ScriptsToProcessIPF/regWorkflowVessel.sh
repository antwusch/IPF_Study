#!/bin/sh
bin_path="/home/exacloud/gscratch/BayouthLab/src/LungReg/groupCode/"
powervault_path="/home/exacloud/gscratch/BayouthLab/DataToProcess/"

#inputs
#############################
#subject="IPF010"
#kernel="B50f_1mm"
if [ $# -ne 7 ]; then
  echo "Usage: $0 subject scanA scanAmove scanAfix scanB scanBmove scanBfix"
  exit 1
fi
subject=$1
echo $subject

scanA=$2
scanB=$5
scanAFix=$4
scanAMove=$3
scanBFix=$7
scanBMove=$6
##############################

CT_input_path="/home/exacloud/gscratch/BayouthLab/DataToProcess/${subject}/"
mask_input_path="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/"
output_base="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/"


deltarzero=2
deltaDzero=0.06
searchRadius=$(($deltarzero+1))
samplingrate=10


#parallel -j 3 --ungroup --progress --verbose sh /Users/awuschner/RegistrationScripts/runRegistrationVessel.sh ::: ${subject} ::: ${CT_input_path} ::: ${mask_input_path} ::: ${output_base} ::: $scanA $scanB $scanB :::+ $scanAMove $scanBFix $scanBMove :::+ $scanA $scanA $scanB :::+ $scanAFix $scanAFix $scanBFix

sh /home/exacloud/gscratch/BayouthLab/ScriptsToProcessIPF/runRegistrationVessel.sh ${subject} ${CT_input_path} ${mask_input_path} $output_base $scanB $scanBFix $scanA $scanAFix

####################### Coordinate warp #######################
#for n in 1 2 3;
#do
#   echo $n

#if [ $n -eq 1 ]
 #  then	
#	fixed_scan=$scanA
#	moving_scan=$scanA
#	fixed="${scanA}_${scanAFix}"
#	moving="${scanA}_${scanAMove}"
#	echo fixed = $fixed
#	echo moving = $moving
#fi

#if [ $n -eq 2 ]
#   then
	fixed_scan=${scanA}
	moving_scan=${scanB}
	fixed="${scanA}_${scanAFix}"
	moving="${scanB}_${scanBFix}"
	echo fixed = $fixed
	echo moving = $moving
#fi


#if [ $n -eq 3 ]
#   then
#	fixed_scan=${scanB}
#	moving_scan=${scanB}
#	fixed="${scanB}_${scanBFix}"
#	moving="${scanB}_${scanBMove}"
#	echo fixed = $fixed
#	echo moving = $moving
#	moving_warp=$fixed
#	fixed_warp="${scanA}_${scanAFix}"
#	fixed_warp_scan=${scanA}
#fi




result_folder="${output_base}/RegistrationWithVessel/${moving}_to_${fixed}/"


moving_input="${CT_input_path}/${moving_scan}"
fixed_input="${CT_input_path}/${fixed_scan}"

movingImage="${moving_input}/${subject}_${moving}.nii.gz"
fixedImage="${fixed_input}/${subject}_${fixed}.nii.gz"

moving_mask_input="${mask_input_path}/${moving_scan}/lung/alpha/"
fixed_mask_input="${mask_input_path}/${fixed_scan}/lung/alpha/"

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
#if [ $n -eq 1 ] || [ $n -eq 3 ]
#then
output_file="${result_folder}/${subject}_${transformationname}_Jacobian.masked.nii.gz"
/home/exacloud/gscratch/BayouthLab/src/LungReg/lungreg-bld/ireg-sstvd-vm/bin/calcJacMasked ${disp1} ${disp2} ${disp3} ${output_file} ${fixedMask}
output_file="${result_folder}/${subject}_${transformationname}_Jacobian.nii.gz"
/home/exacloud/gscratch/BayouthLab/src/LungReg/lungreg-bld/ireg-sstvd-vm/bin/calcJac ${disp1} ${disp2} ${disp3} ${output_file}

#fi

#####################-----------warp 100IN-----------#######################
#if [ $n -eq 1 ] || [ $n -eq 3 ]
#then
warpName="${moving}_to_${fixed}"

normalize_image="0"

disp="${result_folder}/${subject}_${warpName}_displacementField.mha"

outputfixedimage="${result_folder}/${subject}_${moving}_warped_to_${fixed}.nii.gz"
${bin_path}/WarpImage.exe -in ${movingImage} -dfield ${disp} -out ${outputfixedimage} -normaldirection ${normalize_image} -intertype "l"
#fi 
#if [ $n -eq 3 ]
#then
#warpName="${moving_warp}_to_${fixed_warp}"

normalize_image="0"

#disp="${output_base}/${moving_warp}_to_${fixed_warp}/${subject}_${warpName}_displacementField.mha"


outputfixedimage="${result_folder}/${subject}_${transformationname}_Jacobian_warped_to_${fixed}.nii.gz"

unmaskedJac_file="${result_folder}/${subject}_${transformationname}_Jacobian_unmasked.nii.gz"
/home/exacloud/gscratch/BayouthLab/src/LungReg/lungreg-bld/ireg-sstvd-vm/bin/calcJac ${disp1} ${disp2} ${disp3} ${unmaskedJac_file}

${bin_path}/WarpImage.exe -in ${unmaskedJac_file} -dfield ${disp} -out ${outputfixedimage} -normaldirection ${normalize_image} -intertype "l"
#fi
#done

#####################-----------gamma-----------#######################
testMove="${scanB}_${scanBMove}"
testFix="${scanB}_${scanBFix}"
refMove="${scanA}_${scanAMove}"
refFix="${scanA}_${scanAFix}"
testtransformationname="${testMove}_to_${testFix}"
testImage="${result_folder}/${subject}_${testtransformationname}_Jacobian_warped_to_${refFix}.nii.gz"
reftransformationname="${refMove}_to_${refFix}"
refImage="${output_base}/${refMove}_to_${refFix}/${subject}_${reftransformationname}_Jacobian.nii.gz"
gamma_mask_input="${mask_input_path}/${scanA}/lung/alpha/"
mask_file="${gamma_mask_input}/${subject}_${refFix}.mask.nii.gz"
runningRecord_file="${result_folder}/gamma_runningRecord_${testtransformationname}_to_${reftransformationname}_r0is${deltarzero}_D0is${deltaDzero}.txt"
output_image="${result_folder}/${subject}_${testtransformationname}_to_${reftransformationname}_GammaMap.nii.gz"
#${bin_path}/GammaIndex_SAC/project-build/GammaIndex_SAC.exe -referenceImage $refImage -testImage $testImage -mask $mask_file -out $output_image -deltarzero $deltarzero -deltaDzero $deltaDzero -searchRadius $searchRadius | tee ${runningRecord_file}



chmod -R 777 ${result_folder}
