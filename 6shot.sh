#!bin/bash
for loop in `seq 1 40` 
do
    echo "=====> this is Experiment No.$loop ......"

    ~/MFM/bin/mfms {6C6} -n -ep .gen/bin/libcue.so -cp ~/Desktop/6shot/6shot.mfs -d ~/Desktop/6shot/ --run --haltafteraeps 50000

done
