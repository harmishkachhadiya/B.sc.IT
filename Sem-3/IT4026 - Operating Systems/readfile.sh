#you need to check for 1 argument

while read line
do
	echo $line
done < "$1"


# sh readfile.sh [any filename]
# example:  sh readfile.sh readfile.sh
