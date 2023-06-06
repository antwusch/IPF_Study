if [ "$#" -lt 2 ]; then
  echo "Usage: $0 subject scan scan(opt)"
  exit 0
fi


if [ $# -eq 2 ]; then
subject="$1"
scan=$2
ln -s /home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scan}/lung/alpha /home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scan}/lung/mask

fi

if [ $# -eq 3 ]; then
subject="$1"
scanA="$2"
scanB=$3

ln -s /home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanA}/lung/alpha /home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanA}/lung/mask
#ln -s /PowerVault/IPF_Study/working/${subject}/${scanA}/${kernel}/lung/alpha /PowerVault/IPF_Study/working/${subject}/${scanA}/${kernel}/lung/mask
ln -s /home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanB}/lung/alpha /home/exacloud/gscratch/BayouthLab/ProcessedResults/${subject}/${scanB}/lung/mask
#ln -s /PowerVault/IPF_Study/working/${subject}/${scanB}/${kernel}/lung/alpha /PowerVault/IPF_Study/working/${subject}/${scanB}/${kernel}/lung/mask

fi

