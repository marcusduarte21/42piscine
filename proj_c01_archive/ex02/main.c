/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:40:17 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/15 10:07:10 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int numa;
	int numb;

	numa = 1;
	numb = 2;

	a = &numa;
	b = &numb;

	ft_swap(a, b);
	printf("%d - a, %d - b ", numa, numb);
}
