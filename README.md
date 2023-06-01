# IPF_Study
Instructions for subject processing and code building for IPF Study
Files included in this repo include
1. Directory Structure.docx
This file describes the primary directory layout for the OHSU Exacloud system for processing IPF Study subjects.  The document includes a description of each directory and main files that are contained in it.  This is not a comprehensive list of directories - additional folders may have been created for the purpose of individual post-processing tasks 

2. LungRegBuild.docx
Instructions to build the lung registration codes including the dependencies needed.  Main source files mentioned in the instructions are included in this repository.  Other dependencies such as CMake will need to be downloaded from source on the software's respective download page.

3. Lungseg Instructions.docx
Instructions to build the lung segmentation codes including the dependencies needed.  Main source files mentioned in the instructions are included in this repository.  Other dependencies such as CMake will need to be downloaded from source on the software's respective download page.  This build is still needed even with the use of the CNN lung segmentation due to its build of the rigid registration executable.
