#!/bin/bash
col="`head -n1 ${1} | wc -w`"
for((i=1 ; i<=col ; i++))
do
    row="`cut -d\" \" -f$i ${1}`"
    echo $row
done
