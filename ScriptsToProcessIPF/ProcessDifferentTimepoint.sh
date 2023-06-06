#!/bin/bash
#SBATCH --time=24:00:00
#SBATCH --nodes=1
#SBATCH --ntasks=1
#SBATCH --job-name=ProcessDiffTimepointIPF
#SBATCH --mem=100G
#SBATCH -c 16
#SBATCH --output=ProcessDiffTimepoint.txt
#SBATCH --mail-type=END
#SBATCH --mail-user=$USER@ohsu.edu
sh regWorkflowVessel1ScanPost.sh $*
