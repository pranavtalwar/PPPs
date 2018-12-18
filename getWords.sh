#!/bin/bash
content="`cat ${1}`"
for words in $content
do
    echo $words
done
