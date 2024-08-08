#!/bin/bash
#202307100110120

#write a script to find max num

echo "Enter num1: "
read n1
echo "Enter num2: "
read n2

if [ $n1 -gt $n2 ]
then
	echo "Max num is $n1"
else
	echo "Max num is $n2"
fi 

