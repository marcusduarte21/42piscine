/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:52:45 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/29 15:55:50 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	*myarr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	myarr = (int *) malloc (diff * sizeof(int));
	if (myarr == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		myarr[i] = min;
		i++;
		min++;
	}
	*range = myarr;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
        int     i;
        int     min;
        int     max;
	int	*myrange;

        min = -10;
        max = 11;
	myrange = NULL;
        i = ft_ultimate_range(&myrange, min, max);
//        printf("%d\n", i);
	i = 0;
	while(min < max)
	{
		printf("%d\n", myrange[i]);
		i++;
		min++;
	}
        return(0);
}
*/
