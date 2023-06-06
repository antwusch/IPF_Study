function [testScan, testSubject] = parseDicomNewStructure(folderBase, SCANA)
% Get List of folders
folderList = dir(folderBase);
addpath(folderBase);
numFolders = length(folderList);
testFolder = folderList(4);
if testFolder.isdir ~= 1
    disp('Test Folder is not a directory')
    return
end

testFilenameBase = [folderBase,'/',testFolder.name,'/'];

testSliceList = dir(testFilenameBase);
testSlice = testSliceList(20).name;
testCT = [testFilenameBase,testSlice];
metadata = dicominfo(testCT);

testScanner = metadata.Manufacturer;
testSubject = metadata.PatientID;
testScan = SCANA;

outputDir = ['/home/exacloud/gscratch/BayouthLab/DataToProcess/DICOM/',testSubject];
%outputDir = testSubject;
if contains(testScanner, 'SIEMENS')
    Scanner = 1;
elseif contains(testScanner, 'GE')
    Scanner = 2;
else 
    Scanner = 3;
end

switch Scanner
    case 1 %SIEMENS
        parfor folderIndex = 3: numFolders
            ctfolder = folderList(folderIndex);
        
            if ctfolder.isdir == 1
       
                filenameBase = [folderBase,ctfolder.name,'/'];
        
                sliceList = dir(filenameBase);
        
                for n = 3: length(sliceList)
        
                    sliceFile = sliceList(n).name;
        
                    ctFile = [filenameBase,sliceFile];
                    try
                        metadata = dicominfo(ctFile);
                        sliceThick = metadata.SliceThickness;               
                        if sliceThick < 1
                            sliceThick = [num2str(sliceThick*1000), 'um'];
                        else
                            sliceThick = [num2str(sliceThick), 'mm'];
                        end
                        kernelTemp = strsplit(metadata.ConvolutionKernel, '\');
                        if length(kernelTemp) == 2
                            kernel = [kernelTemp{1},kernelTemp{2}];
                        else
                            kernel = kernelTemp{1};
                        end
                        seriesDescrip = metadata.SeriesDescription;
                        scan = seriesDescrip(1:5);
                        comments = metadata.(dicomlookup('0020','4000'));
                        splitComment = strsplit(comments, ',');
                        if length(splitComment) > 1
                            phase = splitComment{2};
                            phase(phase == ' ') = [];
        
                            phase = strrep(phase, '%','');
                            phase = upper(phase);
        
                            folder = [outputDir,'/',scan,'/','/sorted/', phase,'/'];
        
        
                        elseif strcmp(splitComment{1}, 'Average CT')
                            folder = [outputDir,'/',scan,'/','/average/'];
        
                        else
                            warning([ctFile, ' is ', seriesDescrip]);
                        end
        
                        if ~isfolder(folder)
                            mkdir(folder);
                        end
        
                        newFile = [folder,sliceFile];
                        movefile(ctFile, newFile);
        
                    catch
                        warning([ctFile, ' does not have a comments field.']);
                    end
        
                end
        
                if length(dir(filenameBase)) == 2
                    rmdir(filenameBase);
                end
                fprintf(1,'\b.\n'); % \b is backspace
            end
        end
    case 2 %GE
        parfor folderIndex = 3: numFolders
        %for folderIndex = 3: numFolders
            ctfolder = folderList(folderIndex);
        
            if ctfolder.isdir == 1
        
        
                filenameBase = [folderBase,'/', ctfolder.name,'/'];
        
                sliceList = dir(filenameBase);
        
                for n = 3: length(sliceList)
        
                    sliceFile = sliceList(n).name;
        
                    ctFile = [filenameBase,sliceFile];
                    try
                        metadata = dicominfo(ctFile);
                        sliceThick = metadata.SliceThickness;               
                        if sliceThick < 1
                            sliceThick = [num2str(sliceThick*1000), 'um'];
                        else
                            sliceThick = [num2str(sliceThick), 'mm'];
                        end
                        kernelTemp = strsplit(metadata.ConvolutionKernel, '\');
                        if length(kernelTemp) == 2
                            kernel = [kernelTemp{1},kernelTemp{2}];
                        else
                            kernel = kernelTemp{1};
                        end
                        seriesDescrip = metadata.SeriesDescription;
         
                        splitComment = strsplit(seriesDescrip, ',');
                        scan = SCANA;
                        if length(splitComment) > 1
                            phase = splitComment{1};
                            splitphase = strsplit(phase,'=');
                            phase = splitphase{2}
                            phase = strrep(phase, '%','');
                            phase = str2num(phase);
                            switch phase 
                                case 0
                                    phase = '0EX';
                                case 10
                                    phase = '20IN';
                                case 20
                                    phase = '40IN';
                                case 30
                                    phase = '60IN';
                                case 40
                                    phase = '80IN';
                                case 50
                                    phase = '100IN';
                                case 60
                                    phase = '80EX';
                                case 70
                                    phase = '60EX';
                                case 80
                                    phase = '40EX';
                                case 90
                                    phase = '20EX';
                                otherwise
                                    print('Invalid Phases')
                            end

        
                            folder = [outputDir,'/',scan,'/','/sorted/', phase,'/'];
        
        
                        elseif strcmp(splitComment{1}, 'Average CT')
                            folder = [outputDir,'/',scan,'/','/average/'];
        
                        else
                            warning([ctFile, ' is ', seriesDescrip]);
                        end
        
                        if ~isfolder(folder)
                            mkdir(folder);
                        end
        
                        newFile = [folder,sliceFile];
                        movefile(ctFile, newFile);
        
                    catch
                        warning([ctFile, ' phase not found.']);
                    end
        
                end
        
                if length(dir(filenameBase)) == 2
                    rmdir(filenameBase);
                end
                fprintf(1,'\b.\n'); % \b is backspace
            end
        end
        otherwise
            disp('Scanner Manufacturer Not Supported')
end
end
