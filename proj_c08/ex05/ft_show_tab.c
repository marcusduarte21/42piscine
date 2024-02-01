/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:12:43 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/31 16:55:06 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

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
	int	j;

	i = 0;
	while (par[i].str != 0)
	{
		j = 0;
		while (par[i].str[j] != 0)
			write(1, &par[i].str[j++], 1);
		write(1, &"\n", 1);
		j = 0;
		ft_putnbr(par[i].size);
		write(1, &"\n", 1);
		j = 0;
		while (par[i].copy[j] != 0)
			write(1, &par[i].str[j++], 1);
		write(1, &"\n", 1);
		i++;
	}
}
/*
int	main(void)
{
	char c;
	ft_putnbr(42);
}
int main(void)
{
	char	*strs[4];
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		size;

	str1 = "Good";
	str2 = "Morning";
	str3 = "42";
	str4 = "students";
	size = 4;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	ft_show_tab(ft_strs_to_tab(size, strs));
}
*/
