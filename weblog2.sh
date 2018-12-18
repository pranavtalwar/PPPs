#!/bin/bash
list=`ls *.log`
for file in $list
do
  max=(`grep '/products/' $file | sort | cut -f 1,4 |sort -k2 -n| uniq | cut -f 2 | sort -n | uniq -c | sort -k1 -n | tail -n1`)
  echo $file": "${max[1]}
  echo "Last three product page access:"
  grep '/products/' $file |tail -n3 
  echo 
done
