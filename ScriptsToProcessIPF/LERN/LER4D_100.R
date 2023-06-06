library(oro.nifti);

args = commandArgs(trailingOnly=TRUE)

subject <- args[1]
scan <- args[2]

# read in binary lung mask for the 0EX CT
mask <- readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/',scan,'/lung/alpha/',subject,'_',scan,'_0EX.mask.nii.gz'))

# make mask binary
mask[mask > 0] <- 1

# obtain the lung region
mIndex = which(mask!=0)

# Jacobian from 0EX to 0EX
vol_0EX = mask[mIndex]

# read in Jacobian image for the 20IN CT
vol_20IN <- readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/RegistrationWithVessel_Low_Epsilon_005/',scan,'_20IN_to_',scan,'_0EX/Jac_2_2_2_4_4_4.nii.gz'))[mIndex]

# read in Jacobian image for the 40IN CT
vol_40IN <- readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/RegistrationWithVessel_Low_Epsilon_005/',scan,'_40IN_to_',scan,'_0EX/Jac_2_2_2_4_4_4.nii.gz'))[mIndex]

# read in Jacobian image for the 60IN CT
vol_60IN <- readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/RegistrationWithVessel_Low_Epsilon_005/',scan,'_60IN_to_',scan,'_0EX/Jac_2_2_2_4_4_4.nii.gz'))[mIndex]

# read in Jacobian image for the 80IN CT
vol_80IN <- readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/RegistrationWithVessel_Low_Epsilon_005/',scan,'_80IN_to_',scan,'_0EX/Jac_2_2_2_4_4_4.nii.gz'))[mIndex]

# read in Jacobian image for the 20EX CT
vol_20EX <- readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/RegistrationWithVessel_Low_Epsilon_005/',scan,'_20EX_to_',scan,'_0EX/Jac_2_2_2_4_4_4.nii.gz'))[mIndex]

# read in Jacobian image for the 40EX CT
vol_40EX <- readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/RegistrationWithVessel_Low_Epsilon_005/',scan,'_40EX_to_',scan,'_0EX/Jac_2_2_2_4_4_4.nii.gz'))[mIndex]

# read in Jacobian image for the 60EX CT
vol_60EX <- readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/RegistrationWithVessel_Low_Epsilon_005/',scan,'_60EX_to_',scan,'_0EX/Jac_2_2_2_4_4_4.nii.gz'))[mIndex]

# read in Jacobian image for the 80EX CT
vol_80EX <- readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/RegistrationWithVessel_Low_Epsilon_005/',scan,'_80EX_to_',scan,'_0EX/Jac_2_2_2_4_4_4.nii.gz'))[mIndex]

# read in Jacobian image for the 100IN CT, comment out this if 100IN is not needed
vol_100IN <- readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/RegistrationWithVessel_Low_Epsilon_005/',scan,'_100IN_to_',scan,'_0EX/Jac_2_2_2_4_4_4.nii.gz'))[mIndex]

# creat an array for storing the LER4D values
LER4D = array(1,c(length(mIndex)))

### compute LER4D at each voxel
for (ind in 1:length(mIndex))
{
  vol = array(NA,c(10)) # 10 is the number of breathing phases used, you may change it based on your computation
  vol[1] = vol_0EX[ind]
  vol[2] = vol_20IN[ind]
  vol[3] = vol_40IN[ind]
  vol[4] = vol_60IN[ind]
  vol[5] = vol_80IN[ind]
  vol[6] = vol_20EX[ind]
  vol[7] = vol_40EX[ind]
  vol[8] = vol_60EX[ind]
  vol[9] = vol_80EX[ind]
  vol[10] = vol_100IN[ind] # comment out this if 100IN is not used
  LER4D[ind] = max(vol)/min(vol)
}

### write LER4D to disk
imgLER4D = readNIfTI(paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'//RegistrationWithVessel_Low_Epsilon_005/',scan,'_100IN_to_',scan,'_0EX/Jac_2_2_2_4_4_4.nii.gz'))
imgLER4D[1:length(imgLER4D)]=0
indLeg = length(mIndex)
imgLER4D[mIndex[1:indLeg]] <- LER4D[1:indLeg];
#dir.create('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/LERN/')
writeNIfTI(imgLER4D,paste0('/home/exacloud/gscratch/BayouthLab/ProcessedResults/',subject,'/RegistrationWithVessel_Low_Epsilon_005/',subject,'_LER4D_of_',scan))
