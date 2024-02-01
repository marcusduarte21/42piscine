/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:10:56 by mlages-d          #+#    #+#             */
/*   Updated: 2024/02/01 18:02:17 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	printf("%d i\n", i);
	dst = (char *) malloc (i * sizeof(char));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*stock_ptr;

	stock_ptr = malloc (sizeof (t_stock_str) * (ac + 1) );
	if (stock_ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}
//		stock_ptr[i].str = (char *) malloc (sizeof (char) * j);
		stock_ptr[i].copy = (char *) malloc (sizeof (char) * j);
		j = 0;
		while (av[i][j] != '\0')
		{

			stock_ptr[i].str = av[i];
			stock_ptr[i].copy[j] = av[i][j];
			j++;
		}
		stock_ptr[i].size = ft_strlen(av[i]);
		i++;
	}
	stock_ptr[i].str = 0;
	return (stock_ptr);
}
#include <stdio.h>
int	main(void)
{
	char	**strs;

	strs = (char **) malloc (sizeof (char) * 2);

	strs[0] = "hello";
	strs[1] = "world";

	ft_strs_to_tab(2, strs);
}
