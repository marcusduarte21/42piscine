/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3_find_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:35:00 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/21 16:18:03 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	clear_space(char *str1);
int		val_input_size(char *str1);
int		val_input_num(char *str1);
void	read_firstrow(char myarr[4][4]);
void	second_if(char myarr[4][4], char newarr[4][4], int i, int j);
void	print_solution(char newarr[4][4], int i);

int	val_input_size(char *str1)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
		i++;
	if (i != 31)
	{
		write (1, &"Error\n", 6);
		return (1);
	}
	return (0);
}

int	val_input_num(char *str1)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str1[i] < '0' || str1[i] > '4')
			{
				write (1, &"Error\n", 6);
				return (1);
			}
		}
		else if (i % 2 != 0)
		{
			if (str1[i] != ' ')
			{
				write (1, &"Error\n", 6);
				return (1);
			}
		}
		i++;
	}
	return (0);
}

void	second_if(char myarr[4][4], char newarr[4][4], int i, int j)
{
	char	(*ptr)[4];

	ptr = newarr;
	if (myarr[i][j] == '2')
	{
		newarr[0][j] = '3';
		newarr[1][j] = '4';
		newarr[2][j] = '1';
		newarr[3][j] = '2';
	}
	else if (myarr[i][j] == '3')
	{
		ptr[0][j] = '2';
		ptr[1][j] = '3';
		ptr[2][j] = '4';
		ptr[3][j] = '1';
	}
	else if (myarr[i][j] == '4')
	{
		newarr[0][j] = '1';
		newarr[1][j] = '2';
		newarr[2][j] = '3';
		newarr[3][j] = '4';
	}
}

void	read_firstrow(char myarr[4][4])
{
	int		i;
	int		j;
	char	newarr[4][4];

	i = 0;
	j = 0;
	while (j < 4)
	{
		if (myarr[i][j] == '1')
		{
			newarr[0][j] = '4';
			newarr[1][j] = '1';
			newarr[2][j] = '2';
			newarr[3][j] = '3';
		}
		second_if(myarr, newarr, i, j);
		j++;
	}
	i = 0;
	print_solution(newarr, i);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, &"Error\n", 6);
		return (1);
	}
	else if (val_input_size(argv[1]))
		return (1);
	else if (val_input_num(argv[1]))
		return (1);
	clear_space (argv[1]);
	return (0);
}
