if [ $# -ne 4 ]; then
  echo "Usage: $0 subject kernel scan phase"
  exit 1
fi
subject=$1
kernel=$2
scan=$3
phase=$4

outputBase="/home/exacloud/gscratch/BayouthLab/DataToProcess/${subject}/${scan}/"
mkdir -p $outputBase


dicom_Base="/home/exacloud/gscratch/BayouthLab/DataToProcess/DICOM/${subject}/${scan}/sorted"
input_DICOM="${dicom_Base}/${phase}/"



outputFile="${outputBase}/${subject}_${scan}_${phase}.nii.gz"

/home/exacloud/gscratch/BayouthLab/src/LungSeg/lungseg-bld/bin/ConvertBetweenFileFormats ${input_DICOM} ${outputFile} 


