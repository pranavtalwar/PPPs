#!/bin/bash
list="`ls *.txt`"
max_file=0
max_word=0
max_wordlen=0
for files in $list
do
    words="`wc -w $files | cut -d\" \" -f1`"
    keyword="`./getKeyword.sh $files | cut -d\" \" -f1`"
    keywordlen="`./getKeyword.sh $files | cut -d\" \" -f2`"
    if [ $keywordlen -gt $max_wordlen ]
    then
        max_wordlen=$keywordlen
        max_word=$keyword
        max_file=$files
    fi
    echo "${files}: $words words"
    echo "Keyword: $keyword"
    awk -v x="$keyword" '$0~x {print $0}' $files | head -n3
    echo
done
echo "The word is: '$max_word' in $max_file"
