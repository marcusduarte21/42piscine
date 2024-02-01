#include <unistd.h>
#include <stdio.h>

void	get_digit (int newnb, int div, int count)
{	
	int	charnum;
	int	num2;

	while (div != 1)
	{
		num2 = newnb / div;
		charnum = num2 + '0';
		write (1, &charnum, 1);
		newnb = newnb - (num2 * div);
		div = div / 10;
	}
	charnum = newnb + '0';
	write (1, &charnum, 1);
	write (1, &"\n", 1);

}

void    ft_putnbr (int nb)
{
	int	count;
	int	div;
	int	newnb;
	
	div = 1;
	count = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		write (1, &"-", 1);
	}
	newnb = nb;
	while (nb > 9)
	{
		div = div * 10;
		nb = nb / 10;
		count++;
	}
	get_digit (newnb, div, count);
}


int     main(void)
{
	int num;
	ft_putnbr(9);
}

