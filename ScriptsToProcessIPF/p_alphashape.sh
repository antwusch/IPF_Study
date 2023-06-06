#!/bin/sh

if [ $# -lt 3 ]; then
  echo "Usage: $0 subject kernel alpha"
  exit 1
fi

if [ $# -eq 3 ]; then
subject="$1"
kernel="$2"
alpha=$3
parallel --verbose --jobs 4 sh alphashape.sh ${subject} {1} ${kernel} {2} ${alpha} :::: scans.txt :::: phases.txt

fi

if [ $# -eq 4 ]; then
subject="$1"
kernel="$2"
alpha=$3
scanA=$4

parallel --verbose --jobs 4 sh alphashape.sh ${subject} {1} ${kernel} {2} ${alpha} ::: $scanA :::: phases.txt
fi

if [ $# -eq 5 ]; then
subject="$1"
kernel="$2"
alpha=$3
scanA=$4
scanB=$5
parallel --verbose --jobs 4 sh alphashape.sh ${subject} {1} ${kernel} {2} ${alpha} ::: $scanA $scanB :::: phases.txt
fi



