/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:40:00 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/27 18:50:29 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	result;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		result = nb % i;
		if (result == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int num;
	num = ft_is_prime(2147483647);
	printf("%d\n", num);
}
*/
