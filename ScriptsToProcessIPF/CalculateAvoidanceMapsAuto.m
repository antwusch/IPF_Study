function CalculateAvoidanceMapsAuto(subject, scan1File, scan1Fix, scan2File)

load('/home/exacloud/gscratch/BayouthLab/ScriptsToProcessIPF/polymodels/modelNew23.mat');
addpath(strcat('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/LERN/'));
addpath(strcat('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/',scan1File,'/lung/alpha/'));
%Set Paths
    scan2JacFile = [subject,'_LERN_',scan2File,'_warped_to_',scan1File,'_',scan1Fix,'.nii.gz'];
    scan2 = niftiread(scan2JacFile);
    ventMap = scan2;
    temp = scan2;
    maskFile = [subject,'_', scan1File, '_', scan1Fix,'.mask.nii.gz'];
outputBase = strcat('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/LERN/');
mask = niftiread(maskFile);
ventFile = [outputBase, 'preRT_Jacobian'];
vent= ventMap;
niftiwrite(vent, ventFile, 'compressed', true);
maskImg = mask;
AvoidanceBase = ['/home/exacloud/gscratch/BayouthLab/ProcessedResults/', subject, '/', scan2File];
status = mkdir(AvoidanceBase, 'Avoidance');

for dose = 10:10:60
    [xLim,yLim,zLim] = size(ventMap);
    initMap = ventMap;
    initMap(initMap < .9) = .9;
    initMap(initMap > 1.6) = 1.6;
    doseMap = dose*ones(xLim,yLim,zLim);
    
    ratioMap = modelFit(doseMap,initMap);
    %ratioMap(mask.img < 0.5) = 0;
    %AvoidanceBase = ['/home/exacloud/gscratch/BayouthLab/ProcessedResults/', subject, '/', scan2File];
    %status = mkdir(AvoidanceBase, 'Avoidance');
    outputFile = [AvoidanceBase,'/Avoidance/', subject,'_',num2str(dose),'Gy_Avoidance'];
    %outputFile = [outputBase,num2str(dose),'Gy_Avoidance.masked.nii'];
    
    ratioNii = ratioMap;
    niftiwrite(ratioNii, outputFile, 'compressed', true);
    
end
