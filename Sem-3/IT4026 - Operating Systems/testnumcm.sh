#!bin/bash
#202307100110120

#check whether num is positive,negative,zero

if [ $1 -lt 0 ]
then
    echo "$1 is Negative"
elif [ $1 -gt 0 ]
then
    echo "$1 is Positive"
else
    echo "Neither Positive Nor Negative"
fi
 

