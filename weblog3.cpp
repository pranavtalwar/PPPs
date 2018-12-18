#!/bin/bash
file="`find . -name "*.log"`"
count='0'
store=0

for i in $file
do
    number="`cat $i | grep -E '/products/' | sort -t' ' -k4 -n | cut -d'	' -f4 | sort -n | uniq | wc -l`"
    let "store=$number + $store"
    let "count=$count+1"
done
let "value=$store/count"
echo "Average access: $value"

