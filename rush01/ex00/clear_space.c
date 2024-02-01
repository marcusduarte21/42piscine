/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:06:16 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/21 16:13:40 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	read_firstrow(char myarr[4][4]);

void	clear_space(char *str1)
{
	char	myarr[4][4];
	int		i;
	int		j;
	int		y;

	i = 0;
	j = 0;
	while (i < 32)
	{
		y = 0;
		while (j < 32 && y < 4)
		{
			myarr[i][y] = str1[j];
			j += 2;
			y++;
		}
		i++;
	}
	read_firstrow(myarr);
}
