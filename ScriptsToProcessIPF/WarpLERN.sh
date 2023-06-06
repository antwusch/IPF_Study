#inputs
#############################
if [ $# -ne 3 ]; then
  echo "Usage: $0 subject scanA scanB"
  exit 1
fi
subject=$1

scanA=$2
scanB=$3

##############################

output_base="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/RegistrationWithVessel_Low_Epsilon_005/"
output_base1="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/LERN/"
#reg_base="/PowerVault/IPF_Study/working/${subject}/RegistrationWithVessel/${kernel}/${scanB}_0EX_to_${scanA}_0EX/"

fixedWarpMask="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanA}/lung/alpha/${subject}_${scanA}_0EX.mask.nii.gz"
fixedMask="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanB}/lung/alpha/${subject}_${scanB}_0EX.mask.nii.gz"
fixedImage="${output_base}/${subject}_LER4D_of_${scanB}.nii.gz"
output_file="${output_base}/${subject}_LER4D_of_${scanB}_rigid.nii.gz"                                                                                        
/home/exacloud/gscratch/BayouthLab/src/LungSeg/lungseg-bld/bin/RigidRegistration $fixedWarpMask $fixedMask $fixedImage $output_file  
#####################-----------warp Jac-----------#######################

normalize_image="0"

#disp="/home/exacloud/gscratch/BayouthLab/ProcessedResults/IPF002/RegistrationWithVessel/${scanB}_0EX_to_${scanA}_0EX/${subject}_${scanB}_0EX_to_${scanA}_0EX_displacementField.mha"
disp="/home/exacloud/gscratch/BayouthLab/ProcessedResults/IPF002/RegistrationWithVessel/${scanB}_0EX_to_${scanA}_0EX/${subject}_${scanB}_0EX_to_${scanA}_0EX_displacementField.mha"
outputfixedimage="${output_base1}/${subject}_LERN_${scanB}_warped_to_${scanA}_0EX.nii.gz"

initialPerf="${output_base}/${subject}_LER4D_of_${scanB}_rigid.nii.gz"
mkdir ${output_base1}
/home/exacloud/gscratch/BayouthLab/src/LungReg/groupCode/WarpImage.exe -in ${initialPerf} -dfield ${disp} -out ${outputfixedimage} -normaldirection ${normalize_image} -intertype "l"

