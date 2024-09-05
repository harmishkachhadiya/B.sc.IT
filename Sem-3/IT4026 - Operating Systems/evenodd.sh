#!/bin/bash

echo "Enter number: "
read num

value=`expr $num / 2`

if [ $value -eq 1 ]
then
	echo "it is even"
else
	echo "it is odd"
fi 
