/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:01:50 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/29 15:11:40 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*myarr;
	int	i;

	if (min >= max)
		return (NULL);
	diff = max - min;
	myarr = (int *) malloc (diff * sizeof(int));
	if (myarr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		myarr[i] = min;
		min++;
		i++;
	}
	return (myarr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*newarr;
	int	i;
	int	min;
	int	max;

	min = -10;
	max = 11;
	i = 0;
	newarr = ft_range(min, max);
	while (min < max)
	{
		printf("%d\n", newarr[i]);
		i++;
		min++;
	}
	return(0);
}
*/
