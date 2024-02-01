/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:40:41 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/19 11:05:29 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	int num;
	int	size = 10;
	char str1[] = "vamoshello";
	char str2[] = "hel";
	char str3[] = "vamoshello";
	char str4[] = "hel";

	num = ft_strncmp(str1, str2, size);
	printf("%d\n", num);
	num = strncmp(str3, str4, size);
	printf("%d\n", num);
}

