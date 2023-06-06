#find machine

bin_path="/PowerVault/src/niftiToDicom-release/"
lungmech_path="/home/shared"
powervault_path="/PowerVault/"
echo lungmech path is $lungmech_path
#machine found
if [ $# -ne 8 ]; then
  echo "Usage: $0 subject kernel scanA scanAmove scanAfix scanB scanBmove scanBfix"
  exit 1
fi
subject=$1
kernel=$2
echo $subject

scanA=$3
scanB=$6
scanAFix=$5
scanAMove=$4
scanBFix=$8
scanBMove=$7

################# Avoidance Output ##############
reference_dicom_dir="/PowerVault/IPF_Study/data/${subject}/DICOM/${scanA}/${kernel}/sorted/${scanAFix}/"

mask_file="/PowerVault/IPF_Study/working/${subject}/${scanA}/${kernel}/lung/mask/${subject}_${scanA}_${scanAFix}.mask.nii.gz"


input_path="${powervault_path}/IPF_Study/working/${subject}/Avoidance/${kernel}"

for dose in "10" "20" "30" "40" "50" "60"
do

image_file="${input_path}/${subject}_${dose}Gy_Avoidance.nii.gz"
f="$(basename ${image_file})"
f=${f%.*.*}
echo $f
dcm_dir="/PowerVault/IPF_Study/results/${subject}/DICOM/Avoidance/${kernel}/${f}/"
descrip=$f

mkdir -pm 777 $dcm_dir
${bin_path}/niftiToDicom.exe ${reference_dicom_dir} ${image_file} ${dcm_dir} ${descrip} Jac ${mask_file} 
chmod -R 777 $dcm_dir


done

image_file="${input_path}/${subject}_preRT_Jacobian.nii.gz"
f="$(basename ${image_file})"
f=${f%.*.*}
echo $f
dcm_dir="/PowerVault/IPF_Study/results/${subject}/DICOM/Avoidance/${kernel}/${f}/"
descrip=$f

mkdir -pm 777 $dcm_dir
${bin_path}/niftiToDicom.exe ${reference_dicom_dir} ${image_file} ${dcm_dir} ${descrip} Jac ${mask_file} 
chmod -R 777 $dcm_dir

############ Jac Output ############


dicom_Base="/PowerVault/IPF_Study/data/${subject}/DICOM/${scanA}/${kernel}/sorted/${scanAFix}/"

CT_input_path="/PowerVault/IPF_Study/data/${subject}/NIFTI/scan/${kernel}/"
mask_input_path="/PowerVault/IPF_Study/working/${subject}/scan/${kernel}/lung/mask/"
disp_output_path="/PowerVault/IPF_Study/working/${subject}/RegistrationWithVessel/${kernel}/"

####################### Coordinate warp #######################
for n in 1 3;
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


if [ $n -eq 3 ]
   then
	fixed_scan=$scanB
	moving_scan=$scanB
	fixed="${scanB}_${scanBFix}"
	moving="${scanB}_${scanBMove}"
	echo fixed = $fixed
	echo moving = $moving
	moving_warp=$fixed
	fixed_warp="${scanA}_${scanAFix}"
	fixed_warp_scan=$scanA
fi


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

reference_dicom_dir=${dicom_Base}
dcm_output_base="/PowerVault/IPF_Study/results/${subject}/DICOM/Registration"

if [ $n -eq 1 ]
then

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


transformationname="${moving}_to_${fixed}"
CT_file="${disp_output_path}/${transformationname}/${subject}_${moving}_warped_to_${fixed}.nii.gz"

f="$(basename ${CT_file})"
f=${f%.*.*}
echo $f
dcm_dir="${dcm_output_base}/${f}/"
descrip=$f

mkdir -pm 777 $dcm_dir
${bin_path}/niftiToDicom.exe ${reference_dicom_dir} ${CT_file} ${dcm_dir} ${descrip} CT 
chmod -R 777 $dcm_dir
fi

if [ $n -eq 3 ]
then

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

transformationname="${moving}_to_${fixed}"
CT_file="${disp_output_path}/${transformationname}/${subject}_${moving}_warped_to_${fixed}.nii.gz"

f="$(basename ${CT_file})"
f=${f%.*.*}
echo $f
dcm_dir="${dcm_output_base}/${f}/"
descrip=$f

mkdir -pm 777 $dcm_dir
${bin_path}/niftiToDicom.exe ${reference_dicom_dir} ${CT_file} ${dcm_dir} ${descrip} CT 
chmod -R 777 $dcm_dir

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

fi

done
#
#fixedMask="${mask_path}/${subject}_SCAN1_${scan1Fix}.lung.nii.gz"
#jac_file="/PowerVault/ClinicalTrial/${subject}/avoidanceMaps/${subject}_aveJac.nii.gz"
#
#f="$(basename ${jac_file})"
#f=${f%.*.*}
#echo $f
#dcm_dir="/PowerVault/ClinicalTrial/${subject}/DICOM/${f}/"
#descrip=$f
#
#mkdir -pm 777 $dcm_dir
#${bin_path}/niftiToDicom.exe ${reference_dicom_dir} ${jac_file} ${dcm_dir} ${descrip} Jac ${fixedMask} 
#chmod -R 777 $dcm_dir



