/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:48:05 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/28 18:30:12 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			return (res);
		}
		i++;
	}
	return (res);
}

void	print_array(char **str, int param)
{
	int	i;
	int	j;

	i = 1;
	while (i < param)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, &"\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*myarr;

	if (argc > 1)
	{
		j = 1;
		while (j <= argc - 1 )
		{
			i = 1;
			while (i < argc - 1)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					myarr = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = myarr;
				}
				i++;
			}
			j++;
		}
		print_array(argv, argc);
	}
	return (0);
}
