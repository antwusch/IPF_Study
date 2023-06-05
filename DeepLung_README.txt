CNN LungSeg How to Install

Prior Requirements:
You mush have Anaconda installed and python version 3.9 or higher

Instructions
1. Download the DeepLung.tar.gz file
2. Unzip and navigate into the DeepLung folder
3. Run the following series of commands

conda create --name deeplung python=3.9
conda activate deeplung
pip install .

To Run

1. Every time you want to run you will need to activate the anaconda environment by running the command: 
conda activate deeplung
2. Once this is done you can run the following as many times as you want:

seglung –-ctfn $CTFN –-outdir $OUTDIR

where CTFN is the path to the input CT and OUTDIR is the directory where you want the output file written

3. When you are done, deactive the conda environment by running:
 conda deactivate
