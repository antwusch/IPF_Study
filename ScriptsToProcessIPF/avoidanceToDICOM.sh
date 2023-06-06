if [ $# -ne 4 ]; then
  echo "Usage: $0 subject scanA scanB phase"
  exit 1
fi

subject=$1
scanA=$2
scanB=$3
phase=$4


echo $subject

reference_dicom_dir="/home/exacloud/gscratch/BayouthLab/DataToProcess/DICOM/${subject}/${scanA}/sorted/${phase}/"

mask_file="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanA}/lung/alpha/${subject}_${scanA}_${phase}.mask.nii.gz"


input_path="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanB}/Avoidance/"

for dose in "10" "20" "30" "40" "50" "60"
do

image_file="${input_path}/${subject}_${dose}Gy_Avoidance.nii.gz"
f="$(basename ${image_file})"
f=${f%.*.*}
echo $f
dcm_dir="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanB}/Avoidance/DICOM/${f}/"
descrip=$f

mkdir -pm 777 $dcm_dir
/home/exacloud/gscratch/BayouthLab/src/niftiToDicom/niftiToDicom.exe ${reference_dicom_dir} ${image_file} ${dcm_dir} ${descrip} Jac ${mask_file} 
chmod -R 777 $dcm_dir


done