subject=$1
scan=$2

input_base="/home/exacloud/gscratch/BayouthLab/DataToProcess/${subject}/${scan}/"
output_base="/home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scan}/lung/alpha/"

for phase in 0EX 20EX 40EX 60EX 80EX 80IN 60IN 40IN 20IN 100IN
do
	input=${input_base}/${subject}_${scan}_${phase}.nii.gz
	seglung --ctfn ${input} --outdir ${output_base}
done
