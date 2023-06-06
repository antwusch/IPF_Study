
bin_path="/Dedicated/CTmechanics_COPDGene/groupCode/"
powervault_path="/Dedicated/CTmechanics_COPDGene/4D_Data/AMFM/data/"

#inputs
#############################
if [ $# -ne 10 ]; then
  echo "Usage: $0 subject kernel refScan refPhase scanC scanCmove scanCfix scanD scanDmove scanDfix"
  exit 1
fi

subject=$1
kernel=$2


scanA=$3
scanC=$5
scanD=$8
scanAFix=$4
scanCFix=$7
scanCMove=$6
scanDFix=${10}
scanDMove=$9

##############################

CT_input_path="/Dedicated/CTmechanics_COPDGene/4D_Data/AMFM/data/"
mask_input_path="/Dedicated/CTmechanics_COPDGene/4D_Data/AMFM/data/masks/"
output_base="/Dedicated/CTmechanics_COPDGene/4D_Data/AMFM/data/NewRegistrations/${subject}/"


deltarzero=2
deltaDzero=0.06
searchRadius=$(($deltarzero+1))
samplingrate=10

################ Rigid Registration ############################

for n in 1 2;
do
   echo $n

if [ $n -eq 1 ]
   then	
	fixed_scan=${scanC}
	moving_scan=${scanC}
	
	fixed="${scanC}_${scanCFix}"
	moving="${scanC}_${scanCMove}"
	echo fixed = $fixed
	echo moving = $moving
	moving_warp=$fixed
	fixed_warp="${scanA}_${scanAFix}"
	fixed_warp_scan=${scanA}
fi

if [ $n -eq 2 ]
   then
	fixed_scan=${scanD}
	moving_scan=${scanD}
	fixed="${scanD}_${scanDFix}"
	moving="${scanD}_${scanDMove}"
	echo fixed = $fixed
	echo moving = $moving
	moving_warp=$fixed
	fixed_warp="${scanA}_${scanAFix}"
	fixed_warp_scan=${scanA}
fi

result_folder="${output_base}/${fixed}_to_${fixed_warp}/"

mkdir -p $result_folder

moving_input="${CT_input_path}"
fixed_input="${CT_input_path}"
fixed_warp_input="${CT_input_path}"

movingImage="${moving_input}/${subject}_${moving}.nii.gz"
fixedImage="${fixed_input}/${subject}_${fixed}.nii.gz"
fixedWarpImage="${fixed_warp_input}/${subject}_${fixed_warp}.nii.gz"

moving_mask_input="${mask_input_path}"
fixed_mask_input="${mask_input_path}"
fixed_warp_mask_input="${mask_input_path}"

movingMask="${moving_mask_input}/${subject}_${moving}.mask.nii.gz"
fixedMask="${fixed_mask_input}/${subject}_${fixed}.mask.nii.gz"
fixedWarpMask="${fixed_warp_mask_input}/${subject}_${fixed_warp}.mask.nii.gz"

output_file="${result_folder}/${subject}_${fixed}_rigid_to_${fixed_warp}.nii.gz"
/Users/awuschner/src/lungseg-bld/bin/RigidRegistration $fixedWarpMask $fixedMask $fixedImage $output_file

output_file="${result_folder}/${subject}_${fixed}_rigid_to_${fixed_warp}.mask.nii.gz"
/Users/awuschner/src/lungseg-bld/bin/RigidRegistration $fixedWarpMask $fixedMask $fixedMask $output_file mask

done

############# Deformable Registration ########################

parallel -j 2 --ungroup --progress --verbose sh /Users/awuschner/RegistrationScripts/runRegistrationVessel4Scan.sh ::: ${subject} ::: ${CT_input_path} ::: ${mask_input_path} ::: ${output_base} ::: $scanC $scanD :::+ $scanCFix $scanDFix :::+ $scanA $scanA :::+ $scanAFix $scanAFix

#sh /PowerVault/IPF_Study/working/script/runRegistrationVessel.sh IPF008 ${CT_input_path} $mask_input_path $output_base $scanA $scanAMove $scanA $scanAFix

####################### Coordinate warp #######################
for n in 1 2;
do
   echo $n

if [ $n -eq 1 ]
   then	
	fixed_scan=${scanC}
	moving_scan=${scanC}
	fixed="${scanC}_${scanCFix}"
	moving="${scanC}_${scanCMove}"
	echo fixed = $fixed
	echo moving = $moving
	moving_warp=$fixed
	fixed_warp="${scanA}_${scanAFix}"
	fixed_warp_scan=${scanA}
fi

if [ $n -eq 2 ]
   then
	fixed_scan=${scanD}
	moving_scan=${scanD}
	fixed="${scanD}_${scanDFix}"
	moving="${scanD}_${scanDMove}"
	echo fixed = $fixed
	echo moving = $moving
	moving_warp=$fixed
	fixed_warp="${scanA}_${scanAFix}"
	fixed_warp_scan=${scanA}
fi




result_folder="${output_base}/${moving}_to_${fixed}/"


moving_input="${CT_input_path}"
fixed_input="${CT_input_path}"
fixed_warp_input="${CT_input_path}"

movingImage="${moving_input}/${subject}_${moving}.nii.gz"
fixedImage="${fixed_input}/${subject}_${fixed}.nii.gz"
fixedWarpImage="${fixed_warp_input}/${subject}_${fixed_warp}.nii.gz"

moving_mask_input="${mask_input_path}"
fixed_mask_input="${mask_input_path}"
fixed_warp_mask_input="${mask_input_path}"

movingMask="${moving_mask_input}/${subject}_${moving}.mask.nii.gz"
fixedMask="${fixed_mask_input}/${subject}_${fixed}.mask.nii.gz"
fixedWarpMask="${fixed_warp_mask_input}/${subject}_${fixed_warp}.mask.nii.gz"



#####################-----------combine disp-----------#######################

warptransformationname="${fixed}_to_${fixed_warp}"
normalize_image="0"
suffix="_2_2_2_4_4_4.nii.gz"
disp1="${output_base}/${moving_warp}_to_${fixed_warp}/Disp12_x${suffix}"
disp2="${output_base}/${moving_warp}_to_${fixed_warp}/Disp12_y${suffix}"
disp3="${output_base}/${moving_warp}_to_${fixed_warp}/Disp12_z${suffix}"
output_file="${output_base}/${moving_warp}_to_${fixed_warp}/${subject}_${warptransformationname}_displacementField.mha"
${bin_path}/CombineDisplacementForSSTVD.exe -in1 ${disp1} -in2 ${disp2} -in3 ${disp3} -out ${output_file} -normaldirection ${normalize_image}

#Deform 0EX#
normalize_image="0"

disp="${output_base}/${moving_warp}_to_${fixed_warp}/${subject}_${warptransformationname}_displacementField.mha"

inputwarp="${output_base}/${moving_warp}_to_${fixed_warp}/${subject}_${fixed}_rigid_to_${fixed_warp}.nii.gz"
outputfixedimage="${output_base}/${moving_warp}_to_${fixed_warp}/${subject}_${fixed}_warped_to_${fixed_warp}.nii.gz"

${bin_path}/WarpImage.exe -in ${inputwarp} -dfield ${disp} -out ${outputfixedimage} -normaldirection ${normalize_image} -intertype "l"

## rigid Jac ##
#transformationname="${moving}_to_${fixed}"
#unmaskedJac_file="${result_folder}/${subject}_${transformationname}_Jacobian.nii.gz"
#rigid_Jacobian_file="${result_folder}/${subject}_${transformationname}_Jacobian_rigid_to_${fixed_warp}.nii.gz"
#/PowerVault/src/lungseg-bld/bin/RigidRegistration $fixedWarpMask $fixedMask $unmaskedJac_file $rigid_Jacobian_file


## deform Jac ##

#warpName="${moving_warp}_to_${fixed_warp}"

#normalize_image="0"

#disp="${output_base}/${moving_warp}_to_${fixed_warp}/${subject}_${warpName}_displacementField.mha"

#outputfixedimage="${result_folder}/${subject}_${transformationname}_Jacobian_warped_to_${fixed_warp}.nii.gz"

#${bin_path}/WarpImage/project-build-Kai-38/WarpImage.exe -in ${rigid_Jacobian_file} -dfield ${disp} -out ${outputfixedimage} -normaldirection ${normalize_image} -intertype "l"

done
