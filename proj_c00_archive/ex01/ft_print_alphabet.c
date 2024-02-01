/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:41:42 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/12 11:09:08 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	firstchar;
	char	lastchar;

	firstchar = 'a';
	lastchar = 'z';
	while (firstchar <= lastchar)
	{
		write(1, &firstchar, 1);
		firstchar++;
	}
}
