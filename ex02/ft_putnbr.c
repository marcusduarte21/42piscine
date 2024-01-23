#include <stdio.h>
#include <unistd.h>

int	is_zero(int nb)
{
	if(nb == 0)
	{
		return (0);
	}
}

int	is_negative(int nb)
{
	if (nb < 0)
		return (0);
}

void	ft_putnbr (int nb)
{
	int	i;
	int	j;
	int	num;
	int	div;
	int	a;
	int	negative;

	negative = 45;
	a = 0;
	i = 0;
	div = 1;
	if(!is_negative(nb))
	{
		num = nb * -1;
		write(1, &negative, 1);
	}
	else
		num = nb;

	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	j = i;
	while (i != 0)
	{
		div = 10 * div;
		i--;
	}
	while (j > 0 || a == 0) 
	{
		if (!is_zero(num))
		{
			i = 48;
			write(1, &i, 1);
			j = 0;
			a++;
		}
		else if (a == 0)
		{
			i = num / (div / 10);
			i = i + 48;
			write(1, &i, 1);
			div = div / 10 ;
			j--;
			a++;
		}
		else
		{
			div = div / 10 ;
			i = num / div;
			i = i % 10;
			i = i + 48;
			write(1, &i, 1);
			j--;
		}
	}
	printf("\n");
		
}

int	main(void)
{
	ft_putnbr(1809);
}
