%read in the dose map and save it into analyze format
%for medical physics paper
clc
clear all;
close all;

subject='AS70080';
display(subject)

inputjacratiofilename = ['V:\kdu_FEV1\jacobian\',subject,'\',subject,'_75EX_To_0IN_VS_100IN_To_0IN_Jacobian_2_8_ratio.hdr'];
[JacRatio, HDR] = analyze_read(inputjacratiofilename);

inputfilename = ['V:\kdu_IAU\registration\',subject,'\resample\',subject,'_SUP_RETRO_P10_TV10_0IN.mask.hdr'];

outputFolder = ['V:\kdu_FEV1\slab_',subject,'\'];
XLSoutputFileName = [outputFolder,subject,'_30slabs.xls'];


[original_mask, MASKHDR] = analyze_read(inputfilename);
MaskSize=size(original_mask);

indices_mask = find(original_mask>0);
volume_mask = size(indices_mask,1);

mean_all=[];
std_all=[];

for slabnumber=1:30
maskslab=zeros(MaskSize);

% slab1
counter=0;
for j=1:MaskSize(2)
    for k=1:MaskSize(3)
        for i=1:MaskSize(1)
            if( original_mask(i,j,k)>0 )
                counter = counter + 1;
            end
            if( (original_mask(i,j,k)>0) && (counter > volume_mask*(slabnumber-1)/30) && (counter < volume_mask*slabnumber/30) )
                maskslab(i,j,k) = 1;
            end
        end
    end
end

outputFileName = [outputFolder, subject, '_maskslab',num2str(slabnumber),'.hdr'];
[LabelHdr,LabelImg]=analyze_write(maskslab, MASKHDR, outputFileName, 'DataType', 'uchar');
JacRatio_slab = JacRatio.*maskslab;
indices_slab = find( JacRatio_slab>0 );
JacRatio_slab_only = JacRatio_slab(indices_slab);
mean_slab = mean(JacRatio_slab_only)
std_slab = std(JacRatio_slab_only)
disp(['mask slab ', num2str(slabnumber), ' accomplished']);


% mean_all=[mean_slab1, mean_slab2, mean_slab3, mean_slab4, mean_slab5, mean_slab6, mean_slab7, mean_slab8, mean_slab9, mean_slab10, mean_slab11, mean_slab12, mean_slab13, mean_slab14, mean_slab15, mean_slab16, mean_slab17, mean_slab18, mean_slab19, mean_slab20, mean_slab21, mean_slab22, mean_slab23, mean_slab24, mean_slab25, mean_slab26, mean_slab27, mean_slab28, mean_slab29, mean_slab30];
% std_all=[std_slab1, std_slab2, std_slab3, std_slab4, std_slab5, std_slab6, std_slab7, std_slab8, std_slab9, std_slab10, std_slab11, std_slab12, std_slab13, std_slab14, std_slab15, std_slab16, std_slab17, std_slab18, std_slab19, std_slab20, std_slab21, std_slab22, std_slab23, std_slab24, std_slab25, std_slab26, std_slab27, std_slab28, std_slab29, std_slab30];
mean_all=[mean_all, mean_slab];
std_all=[std_all, std_slab];
end

output=zeros(2,30);
output(1,:)=mean_all(1,:);
output(2,:)=std_all(1,:);

TempCellArray = num2cell(output);
OutputCellArray = cell(size(TempCellArray,1)+1,size(TempCellArray,2));
OutputCellArray(2:(size(TempCellArray,1)+1),:)=TempCellArray(1:size(TempCellArray,1),:);
OutputCellArray(1,:) = {'slab1' 'slab2' 'slab3' 'slab4' 'slab5' 'slab6' 'slab7' 'slab8' 'slab9' 'slab10' 'slab11' 'slab12' 'slab13' 'slab14' 'slab15' 'slab16' 'slab17' 'slab18' 'slab19' 'slab20' 'slab21' 'slab22' 'slab23' 'slab24' 'slab25' 'slab26' 'slab27' 'slab28' 'slab29' 'slab30'};

OutputCellArray2 = cell(size(OutputCellArray,1),size(OutputCellArray,2)+1);
OutputCellArray2(:,2:(size(OutputCellArray,2)+1),:)=OutputCellArray(:,1:size(OutputCellArray,2));
OutputCellArray2(:,1) = {subject 'mean' 'std'};



xlswrite( XLSoutputFileName, OutputCellArray2);


