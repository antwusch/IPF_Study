#!/bin/bash
#SBATCH --time=24:00:00
#SBATCH --nodes=1
#SBATCH --ntasks=1
#SBATCH --job-name=ProcessSameTimepointIPF
#SBATCH --mem=100G
#SBATCH -c 16
#SBATCH --output=ProcessSameTimepoint.txt
#SBATCH --mail-type=END
#SBATCH --mail-user=$USER@ohsu.edu
sh regWorkflowVessel.sh $*
