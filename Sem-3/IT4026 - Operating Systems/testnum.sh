#!bin/bash
#202307100110120

#check whether num is positive,negative,zero

echo "Enter number :"
read num
if [ $num -lt 0 ]
then
    echo "$num is Negative"
elif [ $num -gt 0 ]
then
    echo "$num is Positive"
else
    echo "Neither Positive Nor Negative"
fi
 

