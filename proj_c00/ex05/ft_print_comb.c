/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:26:30 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/12 11:06:47 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	knum;
	char	idec;
	char	jcent;

	idec = '0';
	while (idec <= '6')
	{
		jcent = idec + 1;
		while (jcent <= '8')
		{
			knum = jcent + 1;
			while (knum <= '9')
			{
				write(1, &idec, 1);
				write(1, &jcent, 1);
				write(1, &knum, 1);
				knum++;
				write(1, &", ", 2);
			}
			jcent++;
		}
		idec++;
	}
	write(1, &"789", 3);
}
