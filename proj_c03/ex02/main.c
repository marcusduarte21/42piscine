/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:40:41 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/19 11:04:18 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char str1[100] = "Hellovamosvamosvamos ";
	char str2[] = " World123 ";
	char str3[100] = "Hellovamosvamosvamos ";
	char str4[] = " World123 ";

	ft_strcat(str1, str2);
	printf("%s\n", str1);
	strcat(str3, str4);
	printf("%s\n", str3);
}

