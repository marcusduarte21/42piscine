#export FT_LINE1=7 FT_LINE2=15
grep -v '^#' /etc/passwd | sed -n 'n;p' | cut -f1 -d':' | rev | sort -fr | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' '|' | sed s'/|/, /'g | sed s"/, $/\./"
