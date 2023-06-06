function [testScan, testSubject] = parseDicomNewStructureNewSwine(folderBase)
folderList = dir(folderBase);
addpath(folderBase);
numFolders = length(folderList);
testFolder = folderList(4);
if testFolder.isdir ~= 1
    disp('Test Folder is not a directory')
    return
end

testFilenameBase = [folderBase,testFolder.name,'/'];

testSliceList = dir(testFilenameBase);
testSlice = testSliceList(20).name;
testCT = [testFilenameBase,testSlice];
metadata = dicominfo(testCT);

testSubject = metadata.PatientID;
testScan = metadata.SeriesDescription;
testScan = strsplit(testScan);
testScan = testScan{1};
[testScan, ~] = strtok(testScan, 'SCAN');

outputDir = ['/PowerVault/WMS/IPFWMS/Ventilation/4DCT/data',testSubject,'/DICOM'];

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
                    
                    folder = [outputDir,'/',scan,'/',kernel,'_',sliceThick,'/sorted/', phase,'/'];
                    
                    
                elseif strcmp(splitComment{1}, 'Average CT')
                    folder = [outputDir,'/',scan,'/',kernel,'_',sliceThick,'/average/'];
                    
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
