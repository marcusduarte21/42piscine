/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:10:56 by mlages-d          #+#    #+#             */
/*   Updated: 2024/02/01 09:45:09 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
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
	t_stock_str	*stock_ptr;

	stock_ptr = malloc (sizeof(t_stock_str) * (ac + 1));
	if (stock_ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock_ptr[i].str = av[i];
		stock_ptr[i].copy = ft_strdup(av[i]);
		stock_ptr[i].size = ft_strlen(av[i]);
		i++;
	}
	stock_ptr[i].str = 0;
	return (stock_ptr);
}
