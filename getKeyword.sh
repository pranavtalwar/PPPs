#!/bin/bash
ans="`./getWords.sh ${1} | sort | uniq -c | sort -nr | head -n 1`"
ans1="`echo $ans | cut -d" " -f2`"
ans2="`echo $ans | cut -d" " -f1`"
echo "$ans1 $ans2"

