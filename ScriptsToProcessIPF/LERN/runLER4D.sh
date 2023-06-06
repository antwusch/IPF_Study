#!/bin/sh

subject=$1
scan=$2
phase=$3
ep=$4

if [ ${phase} -eq 100 ]
then
	Rscript /home/exacloud/gscratch/BayouthLab/ScriptsToProcessIPF/LERN/LER4D_100.R "${subject}" "${scan}" "${ep}"
elif [ ${phase} -eq 80 ]
then
	Rscript /home/exacloud/gscratch/BayouthLab/ScriptsToProcessIPF/LERN/LER4D_80.R "${subject}" "${scan}" "${ep}"
elif [ ${phase} -eq 60 ]
then
	Rscript /home/exacloud/gscratch/BayouthLab/ScriptsToProcessIPF/LERN/LER4D_60.R "${subject}" "${scan}" "${ep}"
elif [ ${phase} -eq 40 ]
then
	Rscript /home/exacloud/gscratch/BayouthLab/ScriptsToProcessIPF/LERN/LER4D_40.R "${subject}" "${scan}" "${ep}"
fi
