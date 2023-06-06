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


output_dir="${project_dir}/${subject}/${scan}/lung/preseg/"

BIN="${src_dir}/LungSeg/lungseg-bld/bin/"

${BIN}/Image4Dto3D ${output_dir}/${subject}_${scan}.mask.nii.gz ${output_dir}/mask

i=0
while read phase
do
  echo $phase
  mv ${output_dir}/mask${i}.nii.gz ${output_dir}/${subject}_${scan}_${phase}.mask.nii.gz 
  i=$(( i+1 ))
done < phases.txt

rm ${output_dir}/${subject}_${scan}.mask.nii.gz
