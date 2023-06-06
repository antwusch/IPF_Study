#!/bin/bash
#SBATCH --time=24:00:00
#SBATCH --nodes=1
#SBATCH --ntasks=1
#SBATCH --job-name=ProcessLERNRegs
#SBATCH --mem=200G
#SBATCH -c 16
#SBATCH --output=ProcessLERNRegs.txt
#SBATCH --mail-type=END
#SBATCH --mail-user=$USER@ohsu.edu
sh /home/exacloud/gscratch/BayouthLab/ScriptsToProcessIPF/LERN/runAllPhaseReg.sh $*
