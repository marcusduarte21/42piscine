/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parsingh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:53:59 by parsingh          #+#    #+#             */
/*   Updated: 2024/01/13 17:21:13 by parsingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	str2int(char *str, int *num)
{
	int	i;

	*num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			*num = *num * 10 + (int) str[i] - (int) '0';
		}
		else
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	r;

	x = 5;
	y = 5;
	if (argc > 1)
	{
		r = str2int(argv[1], &x);
		if (r != 0)
		{
			x = 5;
		}
	}
	if (argc > 2)
	{
		r = str2int(argv[2], &y);
		if (r != 0)
		{
			y = 5;
		}
	}
	rush(x, y);
	return (0);
}
