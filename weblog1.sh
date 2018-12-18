#!/bin/bash

cat $1 | grep -E '/products/.*' | sort -n | cut -d'	' -f 1,4 |  uniq | sort -t' ' -k2 -n | uniq 

  
