/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:00:57 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/19 10:42:11 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	count_char(char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	return (a);
}

int	check_size(int totalsrc, int size, int i)
{
	int	total;

	if (size < i)
	{
		total = totalsrc + size;
	}
	else
	{
		total = totalsrc + i;
	}
	return (total);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;
	unsigned int	totalsrc;
	unsigned int	total;

	count = 0;
	i = 0;
	totalsrc = count_char(src);
	while (dest[i] != '\0')
	{
		i++;
	}
	total = check_size(totalsrc, size, i);
	while (i + 1 < size && src[count] != '\0')
	{
		dest[i] = src[count];
		count++;
		i++;
	}
	dest[i] = '\0';
	return (total);
}
