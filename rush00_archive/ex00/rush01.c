/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:08:10 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/13 13:25:21 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	check_char(int x, int y, int col, int row);

void	check_char(int x, int y, int col, int row)
{
	if ((row == 1 && col == 1) || (row == y && col == x && row != 1 && x != 1))
	{
		ft_putchar('/');
	}
	else if ((row == 1 && col == x) || (row == y && col == 1))
	{
		ft_putchar('\\');
	}
	else if (row != 1 && row != y && col != 1 && col != x)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			check_char(x, y, col, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
