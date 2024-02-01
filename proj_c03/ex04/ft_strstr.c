/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:53:21 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/18 17:55:11 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*strnew;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (to_find[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (to_find[i] == str[j])
			{
				strnew = &str[j];
			}
			j++;
		}
		i++;
	}
	strnew[j] = '\0';
	return (strnew);
}
