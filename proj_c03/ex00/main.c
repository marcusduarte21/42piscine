/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:40:41 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/19 11:07:09 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int num;
	char str1[] = "bfgooo ";
	char str2[] = "bfgoooo ";
	char str3[] = "bfgooo ";
	char str4[] = "bfgoooo ";

	num = ft_strcmp(str1, str2);
	printf("%d\n", num);
	num = strcmp(str3, str4);
	printf("%d\n", num);
}

