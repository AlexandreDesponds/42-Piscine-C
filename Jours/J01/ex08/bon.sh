ldapsearch -Q -S cn "(sn=*bon*)" cn | grep "^cn: " | wc -l | sed 's# * ##'
