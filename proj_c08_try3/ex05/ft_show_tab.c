/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:12:43 by mlages-d          #+#    #+#             */
/*   Updated: 2024/02/01 13:11:44 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int num)
{
	char	charnum;

	if (num == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		num = -num;
		write(1, &"-", 1);
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		charnum = num + '0';
		write(1, &charnum, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, &"\n", 1);
		ft_putnbr(par[i].size);
		write(1, &"\n", 1);
		ft_putstr(par[i].copy);
		write(1, &"\n", 1);
		i++;
	}
}
