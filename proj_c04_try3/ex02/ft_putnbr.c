/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:17:21 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/31 16:35:26 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	flag;

//	if (nb == -2147483648)
//	{
//		write (1, "-2147483648", 11);
//		return ;
//	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb -1;
		flag = 1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10 && flag == 1)
		ft_putchar(nb + 49);
	else if
		(nb < 10) ft_putchar(nb + 48);
}
#include <stdio.h>
int	main(void)
{
	ft_putnbr(213648);
}
