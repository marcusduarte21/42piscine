/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:56:48 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/30 11:37:49 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	count_strings(char **strs, int size)
{
	int	count;
	int	i;
	int	j;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

int	adding_sep(char *sep, char *newarr, int count)
{
	int	j;

	j = 0;
	while (sep[j] != '\0')
	{
		newarr[count] = sep[j];
		j++;
		count++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		sep_size;
	char	*newarr;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	sep_size = (ft_strlen(sep) * size) + count_strings(strs, size);
	newarr = (char *) malloc (sep_size * sizeof(char));
	while (count < sep_size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			newarr[count] = strs[i][j++];
			count++;
		}
		if (++i == size)
			break ;
		else
			count = adding_sep (sep, newarr, count);
	}
	return (newarr);
}
/*
int	main(void)
{
	int	size;
	char	**strs;
	char	*sep;
	char	*newarr;

	size = 4;
	sep = " ";
	strs = (char **) malloc (25 * sizeof(char));
	strs[0] = "HelloWorld";
	strs[1] = "Onemore";
	strs[2] = "Another";
	strs[3] = "r";
	newarr = (char *) malloc (15 * sizeof(char));
	newarr = ft_strjoin(size, strs, sep);
	int i = 0;
	int j = 0;
	int count = 0;
	while(newarr[i] != '\0')
	{
		printf("%c", newarr[i]);
		i++;
	}
	printf("\n");
}
*/
