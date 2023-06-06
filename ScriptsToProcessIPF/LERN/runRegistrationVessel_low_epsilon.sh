#!/bin/bash
# This script runs the specified registration (SSD or SSTVD) and
# creates a Jacobian image using the final-registration-level displacements.

#reg.sh subject scan moving fixed 
#reg.sh IPF001 SCAN1 100IN 0EX 

####################################
# Read and set parameters

if [ $# -ne 9 ]; then
  echo "Usage: $0 subject CT_input mask_input output_base scan moving_phase scan fixed_phase ep"
  exit 1
fi
subject=$1   # Subject ID (ex: IPF001)
CT_input=$2
mask_input=$3
output_base=$4
scanM=$5      # Scan number of moving (ex: SCAN1)
moving=$6    # Moving image phase (100IN)
scanF=$7      #Scan of fix
fixed=$8     # Fixed image phase (0EX)
ep=$9

sim="sstvd"  # Cost function type (SSD or SSTVD)
wt="1"       # Weight of the SSTVD cost
ved="1"      # Weight of vesselness cost
smooth="1"   # Weight of regularization cost (not used)
level="6"             # Not used???
gamma="0"             # Gamma value for registration
if_read="0"
init_dir="NOINIT"
init_dfield="NOINIT"
inputformat=".nii.gz"    # Format of input images
outputformat=".nii.gz"   # Format of images to be generated

echo "NOW PROCESSING $subject"


####################################
# Set paths

bin="/home/exacloud/gscratch/BayouthLab/src/LungReg/lungreg-bld/ireg-sstvd-vm/bin/" # Build bath
param_model_path="//home/exacloud/gscratch/BayouthLab/src/LungReg/lungreg/param/"     # Path to registration parameter file and dummy lmk file
data_path="/PowerVault/ClinicalTrial/" # Path to preprocessed files



# Full path to output directory is set and created if not already present.
reg_output_path="${output_base}/${scanM}_${moving}_to_${scanF}_${fixed}/"
mkdir -p $reg_output_path


#######################################
# Input data to registration code is set.
moving_input="${CT_input}/${scanM}"
fixed_input="${CT_input}/${scanF}"

moving_image="${moving_input}/${subject}_${scanM}_${moving}.nii.gz"
fixed_image="${fixed_input}/${subject}_${scanF}_${fixed}.nii.gz"

moving_vm="NOINIT"
fixed_vm="NOINIT"

moving_mask_input="${mask_input}/"
fixed_mask_input="${mask_input}/"

moving_mask="${moving_mask_input}/${subject}_${scanM}_${moving}.mask.nii.gz"
fixed_mask="${fixed_mask_input}/${subject}_${scanF}_${fixed}.mask.nii.gz"

moving_lmk="NOINIT"
fixed_lmk="NOINIT"


echo "Now Registering: ${moving_image} to ${fixed_image}"
echo "###################################################################"


#######################################
# The model registration parameter file is modified with the above-assigned
# parameter values and saved to the registration output directory.

modelfile="${param_model_path}/parameters_low_epsilon_${ep}.txt" # Path to model parameter file
parfile="${reg_output_path}parameters.txt"         # Path to output parameter file

# Model parameter file is copied and renamed to the
# above-specified output parameter file path.
cp $modelfile $parfile

# The copied file is then renamed
# with .old1 appended to the filename.
mv $parfile $parfile.old1
chmod 644 $parfile.old1

# Lines of the copied model parameter file are changed to their above-specified values.
sed -e 's:IF_READ:'$if_read':g; s:EXT:'$outputformat':g; s:INIT_DIR:'$init_dir':g; s:INIT_DISP:'$init_dfield':g; s:OUTPUT_DIR:'$reg_output_path':g; s:MOVING_IMAGE:'$moving_image':g; s:FIXED_IMAGE:'$fixed_image':g; s:MOVING_VM:'$moving_vm':g; s:FIXED_VM:'$fixed_vm':g; s:MOVING_MASK:'$moving_mask':g; s:FIXED_MASK:'$fixed_mask':g; s:MOVING_LMK:'$moving_lmk':g; s:FIXED_LMK:'$fixed_lmk':g; s:SIM:'${wt}':g; s:VED:'${ved}':g; s:GAMMA:'${gamma}':g; s:SMOOTH:'${smooth}':g'  $parfile.old1>$parfile

# The copied, renamed model parameter file is then deleted.
rm -f $parfile.old1
chmod 644 $parfile


#######################################
# Here, the registration is executed using the modified parameters file.
${bin}/ireg-${sim}-vm $parfile
echo "###################################################################"
echo "Registering Done!"


#######################################
# Here, the Jacobian images are generated with the final-registration-level displacement images.
suffix="_2_2_2_4_4_4.nii.gz" # Suffix corresponding to final registration level
disp1="${reg_output_path}Disp12_x${suffix}" # Path to final X displacement image
disp2="${reg_output_path}Disp12_y${suffix}" # Path to final Y displacement image
disp3="${reg_output_path}Disp12_z${suffix}" # Path to final Z displacement image
