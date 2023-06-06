#!/bin/sh

if [ $# -ne 2 ]; then
  echo "Usage: $0 subject scan "
  exit 1
fi

subject="$1"
scan="$2"

base_dir="/home/exacloud/gscratch/BayouthLab/"
project_dir="${base_dir}/ProcessedResults/"
src_dir="${base_dir}/src/"
bin="${src_dir}/LungSeg/lungseg-bld/bin/"

data_dir="${project_dir}/${subject}/${scan}/lung/"
preseg_dir="${project_dir}/${subject}/${scan}/lung/preseg/"
mkdir -p ${preseg_dir}

ctfn="${data_dir}/${subject}_${scan}.nii.gz"
outfn="${preseg_dir}/${subject}_${scan}.mask.nii.gz"
${bin}/PreSeg4D ${ctfn} ${outfn}

rm $ctfn
