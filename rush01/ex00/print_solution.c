/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:15:06 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/21 16:19:06 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solution(char newarr[4][4], int i)
{
	int	j;

	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write (1, &newarr[i][j], 1);
			if (j != 3)
				write (1, &" ", 1);
			j++;
		}
		i++;
		write(1, &"\n", 1);
	}
}
