cat /etc/passwd | sed '/^#/d' | sed '1d; n ;d' | rev | sed 's!^.*\*:!!' | sort -r | sed "$FT_LINE1"','"$FT_LINE2"'!d' | tr '\n' ' ' | sed 's# #, #g' | sed 's#, $#.#' | tr -d '\n'
