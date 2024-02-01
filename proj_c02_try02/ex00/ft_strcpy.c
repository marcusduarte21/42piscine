/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:54:12 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/18 13:28:22 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	num;

	num = 0;
	while (src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}
	dest[num] = '\0';
	return (dest);
}
