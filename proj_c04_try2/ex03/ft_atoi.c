/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:46:24 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/25 13:50:39 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_num(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			count++;
		}
		else if ((str[i] < '0' || str[i] > '9') && count != 0)
			return (count);
		else
			i++;
	}
	return (count);
}

int	sum_numbers(char *str, int multiplier)
{
	int	i;
	int	num;
	int	total;

	i = 0;
	total = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '-' || str[i] == '+') && total == 0)
			i++;
		else if ((str[i] == ' ' || str[i] == '\t') && total == 0)
			i++;
		else if ((str[i] == '\n') && total == 0)
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num = (str[i] - '0') * multiplier;
			multiplier = multiplier / 10;
			total = num + total;
			i++;
		}
		else if (str[i] < '0' || str[i] > '9')
			return (total);
	}
	return (total);
}

int	count_minus(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			i++;
			count++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			return (count);
		else
			i++;
	}
	return (count);
}

int	ft_atoi(char *str)
{
	int	count;
	int	multiplier;
	int	total;

	multiplier = 1;
	count = count_num(str);
	while (count > 1)
	{
		multiplier = multiplier * 10;
		count--;
	}
	total = sum_numbers(str, multiplier);
	count = count_minus(str);
	if (count % 2 != 0)
		total = total * -1;
	return (total);
}
/*
#include <stdio.h>
int	main(void)
{
	int	result;

	result = ft_atoi("		---+-+912 34ab567");
	printf("%d\n", result);
}
*/
