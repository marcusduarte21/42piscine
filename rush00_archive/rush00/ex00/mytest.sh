for arq in main05.c main11.c  main12342.c  main15.c  main44.c  main50.c  main51.c  main53.c
do
	echo "------------ TEST $arq --------------"
	cc -Wall -Wextra -Werror $arq ft_putchar.c rush01.c -o user_exe && ./user_exe
done

