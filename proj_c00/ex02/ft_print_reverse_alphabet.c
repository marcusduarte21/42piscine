/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:42:02 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/11 16:12:41 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	firstchar;
	char	lastchar;

	firstchar = 'a';
	lastchar = 'z';
	while (lastchar >= firstchar)
	{
		write(1, &lastchar, 1);
		lastchar--;
	}
}
