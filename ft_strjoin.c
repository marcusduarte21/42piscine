/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:56:48 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/29 18:08:36 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char*	newarr;
	int	count;

	newarr = (char *) malloc (20 * sizeof(char));
	i = 0;
	j = 0;
	count = 0;
	while (count < size)
	{
		while (strs[i][j] != '\0')
		{
			newarr[count] = strs[i][j];
//			printf("%c", newarr[count]);
			j++;
			count++;
		}
		j = 0;
		while (sep[j] != '\0')
		{
			newarr[count] = sep[j];
			j++;
			count++;
		}
		j = 0;
		i++;
	}
	return (newarr);
}

int	main(void)
{
	int	size;
	char	**strs;
	char	*sep;
	char	*newarr;

	size = 17;
	sep = "sep";
	strs = (char **) malloc (size * sizeof(char));
	strs[0] = "HelloWorld";
	strs[1] = "Onemore";
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
