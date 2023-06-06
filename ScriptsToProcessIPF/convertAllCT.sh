if [ $# -ne 3 ]; then
  echo "Usage: $0 subject scantextfile kerneltextfile"
  exit 1
fi

subject=$1
kernels=$3
scans=$2

parallel -j 10 --ungroup sh /home/exacloud/gscratch/BayouthLab/ScriptsToProcessIPF/p_convertDICOMtoNIFTI_Convert.sh ::: ${subject} :::: $kernels :::: $scans ::: "0EX" "20EX" "40EX" "60EX" "80EX" "100IN" "80IN" "60IN" "40IN" "20IN"

#parallel -j 10 --ungroup echo ::: ${subject} ::: $kernels ::: $scans ::: "0EX" "20EX" "40EX" "60EX" "80EX" "100IN" "80IN" "60IN" "40IN" "20IN"

