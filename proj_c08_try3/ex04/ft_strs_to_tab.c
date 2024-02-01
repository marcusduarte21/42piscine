/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:10:56 by mlages-d          #+#    #+#             */
/*   Updated: 2024/02/01 13:11:17 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dst = malloc (sizeof(src) * (i + 1));
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (src[i])
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
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stocstr;
	int			i;

	stocstr = malloc (sizeof(t_stock_str) * (ac + 1));
	if (stocstr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stocstr[i].str = av[i];
		stocstr[i].copy = ft_strdup(av[i]);
		stocstr[i].size = ft_strlen(av[i]);
		i++;
	}
	stocstr[i].str = 0;
	return (stocstr);
}
