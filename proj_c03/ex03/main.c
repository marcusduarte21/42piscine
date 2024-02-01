/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:40:41 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/18 15:28:59 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char str1[100] = "Hello";
	char str2[] = " World123";
	char str3[100] = "Hello";
	char str4[] = " World123";
	int nb = 7;

	ft_strncat(str1, str2, nb);
	printf("%s\n", str1);
	strncat(str3, str4, nb);
	printf("%s\n", str3);
}

