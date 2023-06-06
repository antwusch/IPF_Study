function [movephase1, movephase2, movephase3, movephase4, phasechange, refscan] = ComputeAllVolumesAuto(subject, scan, kernel, refscan)
addpath('/PowerVault/src/MATLAB/nifti');
numPhases = 10;


if scan == 7
    scans = {'SCAN1', 'SCAN2','SCAN7','SCAN8'};
    subjectdata = '/PowerVault/SubjectDataCSV/subjectdata12months.csv';
    data = readtable(subjectdata);
elseif scan == 5
    scans = {'SCAN1', 'SCAN2','SCAN5','SCAN6'};
    subjectdata = '/PowerVault/SubjectDataCSV/subjectdata6months.csv';
    data = readtable(subjectdata);
elseif scan == 3
    scans = {'SCAN1', 'SCAN2','SCAN3','SCAN4'};
    subjectdata = '/PowerVault/SubjectDataCSV/subjectdata3months.csv';
    data = readtable(subjectdata);
else
    scans = {'SCAN1' , 'SCAN2'};
    subjectdata = '/PowerVault/SubjectDataCSV/subjectdata.csv';
    data = readtable(subjectdata);
    
end

volumes = zeros(length(scans),10);
for scanIndex = 1:length(scans)
    currentScan = scans{scanIndex};
    currentScan = char(currentScan)
    for phaseIndex = 1:numPhases;
        phases = {'0EX', '20IN', '40IN', '60IN', '80IN', '100IN', '80EX','60EX','40EX','20EX'};
        currentPhase = phases{phaseIndex};
        currentPhase = char(currentPhase)
        
        inputBase = ['/PowerVault/IPF_Study/working/',subject,'/'];
        file = [inputBase,currentScan,'/',kernel,'/lung/mask/',subject,'_',currentScan,'_',currentPhase,'.mask.nii.gz'];
        
        
        try
            nii = load_untouch_nii(file);
            voxelDim = nii.hdr.dime.pixdim(2:4);
            voxelVol = voxelDim(1)*voxelDim(2)*voxelDim(3);
            
            img = nii.img;
            
            img(img > .1) = 1;
            
            
            vol = sum(sum(sum(img)))*voxelVol/1000000;
            
            
            volumes(scanIndex,phaseIndex) = vol;
        catch
        end
    end
end

%calc tidal volumes
tidalvolumes = volumes;
[rows, ~] = size(tidalvolumes);
for row = 1:rows
    tidalvolumes(row,:) = tidalvolumes(row,:)-tidalvolumes(row,1);
end

phasechange = 0;

%does subject already exist?
subjectinfo = find(ismember(data.SUBJECT, subject));
if ~isempty(subjectinfo)
    movephase1 = data.SCAN1_PHASE{subjectinfo};
    scan1phase = sscanf(movephase1, '%dIN');
    movephase2 = data.SCAN2_PHASE{subjectinfo};
    scan2phase = sscanf(movephase2, '%dIN');
    scan1vol = tidalvolumes(1, scan1phase/20+1);
    scan2vol = tidalvolumes(2, scan2phase/20+1);
    refscan = data.REF_PHASE(subjectinfo);
    %refscan = str2num(refscan);
    
    
    if refscan == 1
        
        if max(tidalvolumes(3,2:6)) < scan1vol
            if max(tidalvolumes(4,2:6)) < max(tidalvolumes(3,2:6))
                [~, idx2] = max(tidalvolumes(4,2:6));
                val1 = 1;
                val2 = 0;
            else
                [~, idx1] = max(tidalvolumes(3, 2:6));
                val1 = 0;
                val2 = 1;
            end
        elseif max(tidalvolumes(4,2:6)) < scan1vol
            [~, idx2] = max(tidalvolumes(4,2:6));
            val1 = 1;
            val2 = 0;
        else
            [val1, idx1] = min(abs(tidalvolumes(3,2:6)-scan1vol));
            [val2, idx2] = min(abs(tidalvolumes(4,2:6)-scan1vol));
        end
        if val1 <= val2
            newvol1 = tidalvolumes(3,idx1+1);
            [diff, idx2] = min(abs(tidalvolumes(4,2:6)-newvol1));
        else
            newvol1 = tidalvolumes(4,idx2+1);
            [diff, idx1] = min(abs(tidalvolumes(3,2:6)-newvol1));
        end
        i = 6;
        while diff > 0.1
            if max(tidalvolumes(4,2:6)) < max(tidalvolumes(3,2:6))
                [diff, idx1] = min(abs(tidalvolumes(4,i)-tidalvolumes(3,2:6)));
                idx2 = i;
            else
                [diff, idx2] = min(abs(tidalvolumes(3,i)-tidalvolumes(4,2:6)));
                idx1 = i;
            end
            i = i-1;
        end
        movephase3 = [num2str(idx1*20) 'IN'];
        movephase4 = [num2str(idx2*20) 'IN'];
        diff = abs(tidalvolumes(3,idx1+1)-scan1vol);
        if diff > 0.1
            [~, idx1] = min(abs(tidalvolumes(3,idx1+1)-tidalvolumes(1,2:6)));
            newvol1 = tidalvolumes(1,idx1+1);
            [~, idx2] = min(abs(newvol1-tidalvolumes(2,2:6)));
            if scan1phase ~= idx1*20 || scan2phase ~= idx2*20
                phasechange = 1;
            end
            movephase1 = [num2str(idx1*20) 'IN'];
            movephase2 = [num2str(idx2*20) 'IN'];
        end
    else
        %         if abs(scan2vol-newvol1) > min(abs(tidalvolumes(2,2:6)))
        %             [~, idx] = min(abs(tidalvolumes(2,2:6)));
        %             scan2vol = tidalvolumes(2,idx+1);
        %             scan2phase = [num2str(idx*20) 'IN'];
        %             [~, idx] = min(abs(tidalvolumes(1,2:6)-scan2vol));
        %             scan1phase = [num2str(idx*20) 'IN'];
        %             tidx = find(strcmp(data.SUBJECT, subject));
        %             data.SCAN1_PHASE(tidx) = cellstr(scan1phase);
        %             data.SCAN2_PHASE(tidx) = cellstr(scan2phase);
        %             writetable(data, subjectdata);
        %         end
        if max(tidalvolumes(3,2:6)) < scan2vol
            if max(tidalvolumes(4,2:6)) < max(tidalvolumes(3,2:6))
                [~, idx2] = max(tidalvolumes(4,2:6));
                val1 = 1;
                val2 = 0;
            else
                [~, idx1] = max(tidalvolumes(3, 2:6));
                val1 = 0;
                val2 = 1;
            end
        elseif max(tidalvolumes(4,2:6)) < scan2vol
            [~, idx2] = max(tidalvolumes(4,2:6));
            val1 = 1;
            val2 = 0;
        else
            [val1, idx1] = min(abs(tidalvolumes(3,2:6)-scan2vol));
            [val2, idx2] = min(abs(tidalvolumes(4,2:6)-scan2vol));
        end
        if val1 <= val2
            newvol1 = tidalvolumes(3,idx1+1);
            [diff, idx2] = min(abs(tidalvolumes(4,2:6)-newvol1));
        else
            newvol1 = tidalvolumes(4,idx2+1);
            [diff, idx1] = min(abs(tidalvolumes(3,2:6)-newvol1));
        end
        i = 6;
        while diff > 0.1
            if max(tidalvolumes(4,2:6)) < max(tidalvolumes(3,2:6))
                [diff, idx1] = min(abs(tidalvolumes(4,i)-tidalvolumes(3,2:6)));
                idx2 = i;
            else
                [diff, idx2] = min(abs(tidalvolumes(3,i)-tidalvolumes(4,2:6)));
                idx1 = i;
            end
            i = i-1;
        end
        movephase3 = [num2str(idx1*20) 'IN'];
        movephase4 = [num2str(idx2*20) 'IN'];
        diff = abs(tidalvolumes(3,idx1+1)-scan2vol);
        if diff > 0.1
            [~, idx2] = min(abs(tidalvolumes(3,idx1+1)-tidalvolumes(2,2:6)));
            newvol2 = tidalvolumes(2,idx2+1);
            [~, idx1] = min(abs(newvol2-tidalvolumes(1,2:6)));
            if ~isempty(scan1phase)
                if scan1phase ~= idx1*20
                    phasechange = 1;
                end
                movephase1 = [num2str(idx1*20) 'IN'];
            end
            if ~isempty(scan2phase)
                if scan2phase ~= idx2*20
                    phasechange = 1;
                end
                movephase2 = [num2str(idx2*20) 'IN'];
            end
            
        end
    end
    
    for i = 1:2
        if i==2
            subjectdata='/PowerVault/SubjectDataCSV/subjectdata.csv';
            data = readtable(subjectdata);
        end
    tidx = find(strcmp(data.SUBJECT, subject));
    switch scan
        case 3
            data.SCAN3_PHASE(tidx) = cellstr(movephase3);
            data.SCAN4_PHASE(tidx) = cellstr(movephase4);
            data.SCAN3_FIXED(tidx) = cellstr('0EX');
            data.SCAN4_FIXED(tidx) = cellstr('0EX');
        case 5
            data.SCAN5_PHASE(tidx) = cellstr(movephase3);
            data.SCAN6_PHASE(tidx) = cellstr(movephase4);
            data.SCAN5_FIXED(tidx) = cellstr('0EX');
            data.SCAN6_FIXED(tidx) = cellstr('0EX');
        case 7
            data.SCAN7_PHASE(tidx) = cellstr(movephase3);
            data.SCAN8_PHASE(tidx) = cellstr(movephase4);
            data.SCAN7_FIXED(tidx) = cellstr('0EX');
            data.SCAN8_FIXED(tidx) = cellstr('0EX');
    end
    if phasechange && i==1
        data.SCAN1_PHASE(tidx) = cellstr(movephase1);
        data.SCAN2_PHASE(tidx) = cellstr(movephase2);
    end
    
    writetable(data, subjectdata);
    
    end
    
    
else
    if refscan == 1
        if max(tidalvolumes(2,2:6)) < max(tidalvolumes(1,2:6))
            [~, idx2] = max(tidalvolumes(2,2:6));
            val1 = 1;
            val2 = 0;
        else
            [~, idx1] = max(tidalvolumes(1, 2:6));
            val1 = 0;
            val2 = 1;
        end
        
        if val1 <= val2
            newvol1 = tidalvolumes(1,idx1+1);
            [diff, idx2] = min(abs(tidalvolumes(2,2:6)-newvol1));
        else
            newvol1 = tidalvolumes(2,idx2+1);
            [diff, idx1] = min(abs(tidalvolumes(1,2:6)-newvol1));
        end
        i = 6;
        while diff > 0.1
            if max(tidalVolumes(4,2:6)) < max(tidalvolumes(3,2:6))
                [diff, idx1] = min(abs(tidalvolumes(4,i)-tidalvolumes(3,2:6)));
                idx2 = i;
            else
                [diff, idx2] = min(abs(tidalvolumes(3,i)-tidalvolumes(4,2:6)));
                idx1 = i;
            end
            i = i-1;
        end
        movephase1 = [num2str(idx1*20) 'IN'];
        movephase2 = [num2str(idx2*20) 'IN'];
        
    else
        
        if max(tidalvolumes(2,2:6)) < max(tidalvolumes(1,2:6))
            [~, idx2] = max(tidalvolumes(2,2:6));
            val1 = 1;
            val2 = 0;
        else
            [~, idx1] = max(tidalvolumes(1, 2:6));
            val1 = 0;
            val2 = 1;
        end
        
        if val1 <= val2
            newvol1 = tidalvolumes(1,idx1+1);
            [diff, idx2] = min(abs(tidalvolumes(2,2:6)-newvol1));
        else
            newvol1 = tidalvolumes(2,idx2+1);
            [diff, idx1] = min(abs(tidalvolumes(1,2:6)-newvol1));
        end
        movephase1 = [num2str(idx1*20) 'IN'];
        movephase2 = [num2str(idx2*20) 'IN'];
    end
    movephase3 = '';
    movephase4 = '';
    tidx = height(data)+1;
    tablecell = cell2table({cellstr(subject), cellstr(movephase1), cellstr('0EX'), ...
        cellstr(movephase2), cellstr('0EX'), cellstr('xx'),cellstr('xx'),cellstr('xx'),...
        cellstr('xx'),cellstr('xx'),cellstr('xx'),cellstr('xx'),cellstr('xx'),...
        cellstr('xx'),cellstr('xx'),cellstr('xx'),cellstr('xx'),cellstr(kernel),refscan});
    data(tidx,:) = tablecell;
    writetable(data, subjectdata);
    
    subjectdata = '/PowerVault/SubjectDataCSV/subjectdata12months.csv';
    data = readtable(subjectdata);
    tablecell = cell2table({cellstr(subject), cellstr(movephase1), cellstr('0EX'), ...
        cellstr(movephase2), cellstr('0EX'), cellstr('xx'),cellstr('xx'),cellstr('xx'),...
        cellstr('xx'),cellstr(kernel),refscan});
    data(tidx,:) = tablecell;
    writetable(data, subjectdata);
    
    
    subjectdata = '/PowerVault/SubjectDataCSV/subjectdata6months.csv';
    data = readtable(subjectdata);
    data(tidx,:) = tablecell;
    writetable(data, subjectdata);
    
    subjectdata = '/PowerVault/SubjectDataCSV/subjectdata3months.csv';
    data = readtable(subjectdata);
    data(tidx,:) = tablecell;
    writetable(data, subjectdata);
    
    
    
    
end
