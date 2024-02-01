/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mymain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:07:08 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/13 15:38:59 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	rush(int x, int y);
int	param_to_integer(char *numargv);

int	param_to_integer(char *numargv)
{
	int number;
	number = 0;
	while (*numargv)
	{
		number = number * 10 + (*numargv - '0');
		if(*numargv > 48 && *numargv < 58)
		{
			return (number);
		}
		numargv++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{

	if (argc == 3)
	{
		char *numarg1 = argv[1];
		char *numarg2 = argv[2];
		int numone;
		int numtwo;

		numone = param_to_integer(numarg1);
		numtwo = param_to_integer(numarg2);
		if (numone != 0 && numtwo != 0)
		{
			rush (numone, numtwo);
		}
	}
	else
	{
		rush (4, 4);
	}
}


