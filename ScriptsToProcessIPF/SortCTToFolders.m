function SortCTToFolders(FolderPath, SubName)
    addpath(FolderPath);

    FileList = dir(FolderPath);
    numFiles = length(FileList);

    %parfor fileIndex = 3:numFiles
    for fileIndex = 1:numFiles
        addpath(FolderPath);
        sliceFile = FileList(fileIndex).name;
        splitName = strsplit(sliceFile, '.');
        
        if length(splitName)<3
            continue
        elseif length(splitName)>4
            phase = splitName{4}
        else
            phase = '0000';
        end
        folder = ['/home/exacloud/gscratch/BayouthLab/DataToProcess/DICOM/',SubName,'/',phase]
        if ~isfolder(folder)
                    mkdir(folder);
        end

        newFile = [folder,'/',sliceFile];
        OriginalPath = [FolderPath,'/',sliceFile];
        copyfile(OriginalPath, newFile);
    end
     
end
