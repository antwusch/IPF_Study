if [ $# -ne 3 ]; then
  echo "Usage: $0 subject kernel scan"
  exit 1
fi

subject=$1
kernel=$2
scan=$3

parallel -j 9 --ungroup sh /home/exacloud/gscratch/BayouthLab/ScriptsToProcessIPF/LERN/regWorkflowVessel_low_epsilon.sh ::: ${subject} ::: $kernel ::: $scan ::: "20EX" "40EX" "60EX" "80EX" "100IN" "80IN" "60IN" "40IN" "20IN" ::: "0EX" ::: 005

#parallel -j 3 --ungroup echo ::: ${subject} ::: $kernel ::: $scan ::: "20EX" "40EX" "60EX" "80EX" "100IN" "80IN" "60IN" "40IN" "20IN" ::: "0EX" ::: 005
