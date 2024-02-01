/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:10:20 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/27 18:50:03 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	result;
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		result = nb % i;
		if (result == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int num;
	num = ft_find_next_prime(-2147483647);
	printf("%d\n", num);
}*/
