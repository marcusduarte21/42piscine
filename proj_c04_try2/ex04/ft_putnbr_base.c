/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:37:57 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/27 18:39:59 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
void	print_result(int nbr, char *base, int nbase);

int	count_base(char *base)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = 0;
		count = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				count++;
				if (count > 1)
					return (1);
			}
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		nbase;

	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, &"-", 1);
	}
	if (count_base(base) > 1)
	{
		nbase = count_base(base);
		print_result(nbr, base, nbase);
	}
}
void	print_result(int nbr, char *base, int nbase)
{
	char	charnum;

	if (nbase > 1)
	{
		if (nbr >= nbase)
		{
			ft_putnbr_base(nbr / nbase, base);
			ft_putnbr_base(nbr % nbase, base);
		}
		else
		{
			if (nbr > 9)
				charnum = nbr + 55;
			else
				charnum = nbr + '0';
			write (1, &base[nbr], 1);
		}
	}
}
/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr_base(10, "123");
	return (0);
}
*/
