#find machine

#machine found
if [ $# -ne 4 ]; then
  echo "Usage: $0 subject scanA scanAfix scanB"
  exit 1
fi
subject=$1

scanA=$2
scanB=$4
scanAFix=$3

#################################### .nii.gz to dicom ###########################################

reference_dicom_dir="/home/exacloud/gscratch/BayouthLab/DataToProcess/DICOM/${subject}/${scanA}/sorted/${scanAFix}/"
dcm_output_base="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/LERN/DICOM/${scanB}"
fixedMask="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanA}/lung/alpha/${subject}_${scanA}_${scanAFix}.mask.nii.gz"
jac_file="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/LERN/${subject}_LERN_${scanB}_warped_to_${scanA}_${scanAFix}.nii.gz"

f="$(basename ${jac_file})"
f=${f%.*.*}
echo $f
dcm_dir="${dcm_output_base}/${f}/"
descrip=$f

mkdir -pm 777 $dcm_dir
/home/exacloud/gscratch/BayouthLab/src/niftiToDicom/niftiToDicom.exe ${reference_dicom_dir} ${jac_file} ${dcm_dir} ${descrip} Jac ${fixedMask} 
chmod -R 777 $dcm_dir
