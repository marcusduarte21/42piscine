/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:09:24 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/16 17:15:13 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	num;
	int	x;
	int	count;

	num = 0;
	count = size / 2;
	while (count > 0)
	{
		size--;
		x = tab[num];
		tab[num] = tab[size];
		tab[size] = x;
		num++;
		count--;
	}
}
