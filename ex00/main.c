/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:23:50 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/19 12:28:39 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int	main(void)
{
	char	str1[] = "a()=(=((=cb123d";
	char	str2[] = "a)/=)(/(=cb123d";
	int	num1;
	int	num2;
		
	num1 = strlen(str1);
	num2 = ft_strlen(str2);
	printf("%d - real", num1);
	printf(" %d - mine\n", num2);
}
