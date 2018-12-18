#!/bin/bash
g++ -o random random.cpp
./random < input.txt > output.txt
list="`cat output.txt`"
count=0
for number in $list
do
    if [ $number -ge ${1} ]
    then 
        count=$((count+1))
    fi
done
echo $count
