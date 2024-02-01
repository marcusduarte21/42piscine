/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:42:20 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/12 11:09:48 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	firstnum;
	int	lastnum;

	firstnum = '0';
	lastnum = '9';
	while (firstnum <= lastnum)
	{
		write(1, &firstnum, 1);
		firstnum++;
	}
}
