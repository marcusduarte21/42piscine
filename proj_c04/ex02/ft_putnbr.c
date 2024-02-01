/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:29:28 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/25 11:33:06 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_digit(int newnb, int div)
{
	int	charnum;
	int	num;

	while (div != 1)
	{
		num = newnb / div;
		charnum = num + '0';
		write (1, &charnum, 1);
		newnb = newnb - (num * div);
		div = div / 10;
	}
	charnum = newnb + '0';
	write (1, &charnum, 1);
	write (1, &"\n", 1);
}

void	ft_putnbr(int nb)
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
	get_digit (newnb, div);
}
