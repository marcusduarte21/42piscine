/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:22:21 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/25 11:21:02 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_atoi_base(char *str, char *base);
char    print_result(int nbr, char *base);

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
		if ((str[i] == '-' || str[i] == '+' || str[i] == ' ') && total == 0)
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
		else
			i++;
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

int     count_base(char *base)
{
        int     i;
        int     j;
        int     count;

        i = 0;
        while (base[i] != '\0')
        {
                if (base[i] == '+' || base[i] == '-')
                        return (1);
                j = 0;
                count = 0;
                while (base[j] != '\0')
                {
                        if (base[i] == base[j])
                        {
                                count++;
                                if (count > 1)
                                        return (1);
                        }
                        j++;
                }
                i++;
        }
        return (i);
}

char    print_result(int nbr, char *base)
{
        char    charnum;
	int	num;

	num = 0;
	while (base[num])
		num = num + 1;
	if (nbr >= num)
        {
		print_result(nbr / num, base);
                print_result(nbr % num, base);
	}
        else
	{
		if (nbr > 9)
			charnum = nbr + 55;
		else
			charnum = nbr + '0';
		return (charnum);
	}
}




void	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	nbase;
	int	i;
	int	*str2;

	nbr = ft_atoi(str);
//	printf("%d nbr\n", nbr);

        if (nbr < 0)
        {
                nbr = nbr * -1;
               // write(1, &"-", 1);
        }
        if (count_base(base) > 1)
        {
                nbase = count_base(base);
		i = 0;
                while (print_result(nbr, base) != '0')
		{
			str2[i] = print_result(nbr, base);
			write(1, &str2[i], 1);
			i++;
		}
		i = 0;
/*		while (str2[i] != '\0')
		{
			write(1, &str2[i], 1);
			i++;
		}*/
		write(1, &"\n", 1);
        }
}




int	main(void)
{
	int	result;

	ft_atoi_base(" ---+-+91234ab567", "10");
//	printf("%d\n", result);
}
