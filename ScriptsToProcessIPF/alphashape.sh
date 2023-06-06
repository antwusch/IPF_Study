#!/bin/sh

if [ $# -ne 4 ]; then
  echo "Usage: $0 subject scan kernel phase alpha"
  exit 1
fi

subject="$1"
scan="$2"
phase="$3"
alpha=$4

base_dir="/home/exacloud/gscratch/BayouthLab/"
project_dir="${base_dir}/ProcessedResults/"
src_dir="${base_dir}/src/"
bin="${src_dir}/LungSeg/lungseg-bld/bin/"
binpython="${src_dir}/LungSeg/lungseg/Python/"

data_dir="${project_dir}/${subject}/${scan}/lung/preseg/"
output_dir="${project_dir}/${subject}/${scan}/lung/alpha/"
mkdir -p ${output_dir}

mask_fn="${data_dir}/${subject}_${scan}_${phase}.mask.nii.gz"
result_fn_base="${output_dir}/${subject}_${scan}_${phase}"
python3 ${binpython}/delaunay3d.py ${mask_fn} ${result_fn_base} ${alpha}

${bin}/LungMeshToImageFilter \
       "${output_dir}/${subject}_${scan}_${phase}.vtk" \
       "${data_dir}/${subject}_${scan}_${phase}.mask.nii.gz" \
       "${output_dir}/${subject}_${scan}_${phase}.mask.nii.gz"


#osf_dir="${project_dir}/working/${subject}/${scan}/${kernel}/lung/osf/"
#mkdir -p ${osf_dir}
#cp "${output_dir}/${subject}_${scan}_${phase}.mask.nii.gz" "${osf_dir}/${subject}_${scan}_init.mask.nii.gz"

rm ${output_dir}/${subject}_${scan}_${phase}.vtk

