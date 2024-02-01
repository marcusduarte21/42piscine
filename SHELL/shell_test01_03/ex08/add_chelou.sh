####str1="\'?" str2='"\"' str3="'" str4='\' 
####export FT_NBR1=$str1$str2$str3$str4
####export FT_NBR2="rcrdmddd"
###13 in base 5 is 23
###using sed because \' does not work with tr
echo $FT_NBR1 + $FT_NBR2 | sed "s/'/0/g" | tr '\\"?!' 1234 | tr "mrdoc" "01234" | xargs echo "ibase=5; obase=23;" | bc |\
#sum 82671 converted in "gtaio luSnemf"
tr "0123456789ABC" "gtaio luSnemf"

