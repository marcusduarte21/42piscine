/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:00:10 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/29 11:18:15 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (count + 1 < size)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (i);
}
