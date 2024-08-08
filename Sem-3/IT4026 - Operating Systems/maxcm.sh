#!/bin/bash
#202307100110120
#write a script to find max num

if [ $# -ne 2 ]
then
	echo "Enter two num as command line argument "
	echo "Usage ::maxcm.sh num1 num2 "
exit 1
fi 

if [ $1 -gt $2 ]
then
	max=$1
else
	max=$2
fi 

echo "$max is max"
