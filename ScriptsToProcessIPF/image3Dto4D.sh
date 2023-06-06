#!/bin/sh/

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 subject scan"
  exit 0
fi

subject="$1"
scan="$2"

base_dir="/home/exacloud/gscratch/BayouthLab/"
project_dir="${base_dir}/ProcessedResults/"
src_dir="${base_dir}/src/"


ct_dir="${base_dir}/DataToProcess/${subject}/${scan}/"
output_dir="${project_dir}/${subject}/${scan}/lung/"
mkdir -p "${output_dir}"

BIN="${src_dir}/LungSeg/lungseg-bld/bin/"

# Fill in parameters file

if [ ! -f ${output_dir}/${subject}_${scan}.nii.gz ]
then
  sed "s/SUBJECT/${subject}/g;
       s#SCAN#${scan}#g;
       s#CT_PATH#${ct_dir}#g;
       s#OUTPUT_PATH#${output_dir}#g" ParamImage3Dto4D.txt.in > ${output_dir}/ParamImage3Dto4D.txt

  ${BIN}/Image3Dto4D ${output_dir}/ParamImage3Dto4D.txt
fi

