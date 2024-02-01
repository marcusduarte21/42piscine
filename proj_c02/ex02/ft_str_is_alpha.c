/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:48:20 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/17 12:13:45 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || str[count] > 'z')
		{
			return (0);
		}
		if (str[count] > 'Z' && str[count] < 'a')
		{
			return (0);
		}
		count++;
	}
	return (1);
}
