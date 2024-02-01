/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:40:17 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/15 11:38:03 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int numa;
	int numb;
	int *a;
	int *b;

	numa = 7;
	numb = 2;
	a = &numa;
	b = &numb;


	ft_ultimate_div_mod(a, b);
	printf("%d - a, %d - b,\n", *a, *b);
}
