#!/bin/sh

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 subject scan kernel"
  exit 0
fi

subject="$1"
scan="$2"

base_dir="/home/exacloud/gscratch/BayouthLab/"
project_dir="${base_dir}/ProcessedResults/"
src_dir="${base_dir}/src/"
bin="${src_dir}/LungSeg/lungseg-bld/bin/"

sh image3Dto4D.sh ${subject} ${scan}
time sh preseg4d.sh ${subject} ${scan} 
sh image4Dto3D.sh ${subject} ${scan}
