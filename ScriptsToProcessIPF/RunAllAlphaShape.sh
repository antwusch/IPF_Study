if [ $# -ne 3 ]; then
  echo "Usage: $0 subject scan kernel phase alpha"
  exit 1
fi

subject="$1"
scan="$2"
alpha=$3

sh alphashape.sh ${subject} ${scan} 0EX ${alpha}
sh alphashape.sh ${subject} ${scan} 20EX ${alpha}
sh alphashape.sh ${subject} ${scan} 40EX ${alpha}
sh alphashape.sh ${subject} ${scan} 60EX ${alpha}
sh alphashape.sh ${subject} ${scan} 80EX ${alpha}
sh alphashape.sh ${subject} ${scan} 20IN ${alpha}
sh alphashape.sh ${subject} ${scan} 40IN ${alpha}
sh alphashape.sh ${subject} ${scan} 60IN ${alpha}
sh alphashape.sh ${subject} ${scan} 80IN ${alpha}
sh alphashape.sh ${subject} ${scan} 100IN ${alpha}
