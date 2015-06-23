#!bin/bash
for loop in `seq 1 6` 
do
    echo "=====> this is Experiment No.$loop ......"

~/MFM/bin/mfms {4C4} -n -ep .gen/bin/libcue.so -cp ~/Desktop/4c4/4c4wall.mfs -d ~/Desktop/4c4/ --run --haltafteraeps 50000

done
