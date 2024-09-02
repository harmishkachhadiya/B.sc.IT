#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Provide a number as command line argument."
    echo "USAGE: sh $0 <number >"
    exit 1
fi

n=$1
i=1
while [ $i -le $n ]; do
    j=1
    while [ $j -le $((n - i)) ]; do
        echo -n "   "
        j=`expr $j + 1`
    done
    echo "_|"
    i=`expr $i + 1`
done
