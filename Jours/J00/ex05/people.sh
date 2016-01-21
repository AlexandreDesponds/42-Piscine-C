ldapsearch -Q -S cn "(uid=z*)" cn | grep "^cn:" | sort -r | cut -c 5-
