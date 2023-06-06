% Script to run the Lung tools to generate the vessel mask. 
Subject='H5974';
input1=['V:\2010_12_02_LandmarkPicking\', Subject,'\resample\',Subject,'_baseFRC.hdr'];
input2=['V:\2010_12_02_LandmarkPicking\', Subject,'\resample\',Subject,'_baseFRC.mask.hdr'];
output=['V:\2010_12_02_LandmarkPicking\', Subject,'\resample\',Subject,'_baseFRC-vessels.hdr'];
%0.07
dos(['"D:\Programs\Version-11.1.1\vesselseg.exe"', ' ',input1,' ',input2, ' ',output, ' -p -0.10 -t 4 -n']);
