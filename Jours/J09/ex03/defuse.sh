#!/bin/sh
touch -A '-000001' bomb.txt
stat -s bomb.txt | grep -o -E 'st_atime=[0-9]{1,12}' | cut -c 10- 
