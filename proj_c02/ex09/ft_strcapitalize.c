/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:56:45 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/18 13:59:01 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_char(char *str, int count, int i)
{
	if ((str[count] >= 'a' && str[count] <= 'z') && (i == 1))
	{
		str[count] = str[count] - 32;
	}
	else if((str[count] >= 'A' && str[count] <= 'Z') && (i != 1))
	{
		str[count] = str[count] + 32;
	}
	else if (str[count] < 48 || str[count] > 122)
	{
		i = 0;
	}
	else if (str[count] > 57 && str[count] < 65)
	{
		i = 0;
	}
	else if (str[count] > 90 && str[count] < 97)
	{
		i = 0;
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[count] != '\0')
	{
		i++;
		i = ft_check_char(str, count, i);
		count++;
	}
	return (str);
}
