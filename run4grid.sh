#!bin/bash
for loop in `seq 1 10` 
do
    echo "=====> this is Experiment No.$loop ......"

    ~/MFM/bin/mfms {4C4} -n -ep .gen/bin/libcue.so -cp ~/Desktop/4c4grid/8by8grid.mfs -d ~/Desktop/4c4grid/ --run --haltafteraeps 50000

done
