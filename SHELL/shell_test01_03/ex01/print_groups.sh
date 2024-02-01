#export FT_USER=mlages-d
id -nG "${FT_USER}" | sed s"/ /,/g" | tr -d '\n'
