/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:40:17 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/16 17:50:35 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int size;
	int myarr[] = {1, 8, 7, 4, 5, 0};

	size = 6;
	tab = myarr;

	ft_sort_int_tab(tab, size);
 	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	printf("%d\n", tab[5]);
	printf("%d", myarr[0]);
	printf("%d", myarr[1]);
	printf("%d", myarr[2]);
	printf("%d", myarr[3]);
	printf("%d", myarr[4]);
	printf("%d\n", myarr[5]);
}
