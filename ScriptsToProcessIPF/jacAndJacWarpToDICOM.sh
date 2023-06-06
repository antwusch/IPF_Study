#find machine

bin_path="/PowerVault/src/niftiToDicom-release/"
lungmech_path="/home/shared"
powervault_path="/PowerVault/"
echo lungmech path is $lungmech_path
#machine found
if [ $# -ne 7 ]; then
  echo "Usage: $0 subject kernel scanA scanAfix scanB scanBmove scanBfix"
  exit 1
fi
subject=$1
kernel=$2
echo $subject

scanA=$3
scanB=$5
scanAFix=$4
scanBFix=$7
scanBMove=$6



CT_input_path="/PowerVault/IPF_Study/data/${subject}/NIFTI/scan/${kernel}/"
mask_input_path="/PowerVault/IPF_Study/working/${subject}/scan/${kernel}/lung/mask/"
disp_output_path="/PowerVault/IPF_Study/working/${subject}/RegistrationWithVessel/${kernel}/"

####################### Coordinate warp #######################



	fixed_scan=$scanB
	moving_scan=$scanB
	fixed="${scanB}_${scanBFix}"
	moving="${scanB}_${scanBMove}"
	echo fixed = $fixed
	echo moving = $moving
	moving_warp=$fixed
	fixed_warp="${scanA}_${scanAFix}"
	fixed_warp_scan=$scanA



result_folder="${output_base}/${moving}_to_${fixed}/"


moving_input="${CT_input_path/scan/$moving_scan}"
fixed_input="${CT_input_path/scan/$fixed_scan}"
movingImage="${moving_input}/${subject}_${moving}.nii.gz"
fixedImage="${fixed_input}/${subject}_${fixed}.nii.gz"
moving_mask_input="${mask_input_path/scan/$moving_scan}"
fixed_mask_input="${mask_input_path/scan/$fixed_scan}"
movingMask="${moving_mask_input}/${subject}_${moving}.mask.nii.gz"
fixedMask="${fixed_mask_input}/${subject}_${fixed}.mask.nii.gz"


#################################### .nii.gz to dicom ###########################################

reference_dicom_dir="/PowerVault/IPF_Study/data/${subject}/DICOM/${scanB}/${kernel}/sorted/${scanBFix}/"
dcm_output_base="/PowerVault/IPF_Study/results/${subject}/DICOM/Registration"


transformationname="${moving}_to_${fixed}"
jac_file="${disp_output_path}/${transformationname}/${subject}_${transformationname}_Jacobian.nii.gz"

f="$(basename ${jac_file})"
f=${f%.*.*}
echo $f
dcm_dir="${dcm_output_base}/${f}/"
descrip=$f

mkdir -pm 777 $dcm_dir
${bin_path}/niftiToDicom.exe ${reference_dicom_dir} ${jac_file} ${dcm_dir} ${descrip} Jac ${fixedMask} 
chmod -R 777 $dcm_dir


reference_dicom_dir="/PowerVault/IPF_Study/data/${subject}/DICOM/${scanA}/${kernel}/sorted/${scanAFix}/"
fixed_mask_input="${mask_input_path/scan/$fixed_warp_scan}"
fixedMask="${fixed_mask_input}/${subject}_${fixed_warp}.mask.nii.gz"

transformationname="${moving}_to_${fixed}"
jac_file="${disp_output_path}/${transformationname}/${subject}_${transformationname}_Jacobian_warped_to_${fixed_warp}.nii.gz"

f="$(basename ${jac_file})"
f=${f%.*.*}
echo $f
dcm_dir="${dcm_output_base}/${f}/"
descrip=$f

mkdir -pm 777 $dcm_dir
${bin_path}/niftiToDicom.exe ${reference_dicom_dir} ${jac_file} ${dcm_dir} ${descrip} Jac ${fixedMask} 
chmod -R 777 $dcm_dir




