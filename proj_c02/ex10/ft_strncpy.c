/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:14:57 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/17 17:25:29 by mlages-d         ###   ########.fr       */
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
