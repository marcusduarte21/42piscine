/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:40:17 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/15 09:59:09 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int *********nbr;
	int ********nbr8;
	int *******nbr7;
	int ******nbr6;
	int *****nbr5;
	int ****nbr4;
	int ***nbr3;
	int **nbr2;
	int *nbr1;
	int num;

	nbr1 = &num;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr = &nbr8;

	ft_ultimate_ft(nbr);
	printf("%d\n", num);
}
