#!/bin/bash
content="`cat $2`"
for word in $content
do
    if [ $word == $1  ]
    then
        echo -e "\e[1m$word\e[m"
    else
        echo "$word"
    fi
done
