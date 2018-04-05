ldapsearch -Q sn="*bon*" | grep sn: | wc -l | sed "s/ //g"
