#!/bin/sh
RET=`ifconfig | grep -o -E '([0-9]{1,3}\.){3}[0-9]{1,3}' | grep -v -e '^0.' | grep -v -e '^127.' | grep -v -e '255$'`
if [[ -z $RET ]]
then
	echo "Je suis perdu!"
else
	echo $RET
fi
