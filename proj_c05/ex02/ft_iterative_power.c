/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:15:26 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/26 11:28:31 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;

	total = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		total = nb * total;
		power--;
	}
	return (total);
}
/*
#include <stdio.h>
int	main(void)
{
	int num;

	num = ft_iterative_power(0, 7);
	printf("%d\n", num);
}
*/
