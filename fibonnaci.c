#include <unistd.h>
#include <stdio.h>


int	ft_fibonnaci(int x)
{
	if (x == 1)
	{
		return (0);
	}
	if (x == 2)
	{
		return (1);
	}
	return ft_fibonnaci (x - 2) + ft_fibonnaci(x - 1);
}

void	ft_putnbr(int nb)
{
	char	charnum;
	if (nb < 0)
		write(1, &"-", 1);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		charnum = nb + '0';
		write(1, &charnum, 1);
	}
}

int	ft_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else
	{
	      return nb * ft_factorial (nb -1);
	}
}

int	somar(int nb)
{
	if (nb == 0)
	{
		return (0);
	}
	return (nb + somar(nb - 1));
}

int	main(void)
{
	int	num;

//	num = ft_fibonnaci(10);
//	num = ft_factorial(4);
	num = somar(4);
	ft_putnbr(num);
	write(1, &"\n", 1);

}
