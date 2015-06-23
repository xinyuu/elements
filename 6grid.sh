#!bin/bash
for loop in `seq 1 40` 
do
    echo "=====> this is Experiment No.$loop ......"

    ~/MFM/bin/mfms {6C6} -n -ep .gen/bin/libcue.so -cp ~/Desktop/6grid/6grid.mfs -d ~/Desktop/6grid/ --run --haltafteraeps 50000

done
