/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:02:09 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/27 18:46:31 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i * i != nb && i < 46341)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int num;
	num = ft_sqrt(-2147483647);
	printf("%d\n", num);
}
*/
