#!/bin/bash

if [ $# -ne 1 ] 
then
	echo "Enter atlist 1 element in command line argument"
	exit 1
fi

num=$1
i=1
while [ $i -le $num ]
do
	j=1
	while [	$j -le $i ]
	do
		echo -n " "
		#echo $i $j	
		j=`expr $j + 1`
	done
	
	echo "|_"
	i=`expr $i + 1`

done
