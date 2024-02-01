/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:40:17 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/15 11:26:59 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int numa;
	int numb;
	int *div;
	int *mod;

	div = &numa;
	mod = &numb;
	a = 7;
	b = 2;


	ft_div_mod(a, b, div, mod);
	printf("%d - a, %d - b, %d div, %d mod\n", a, b, *div, *mod);
}
