/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:40:41 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/19 10:49:38 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str1[] = "ABC DEF GHI";
	char str2[] = "C";
	char str3[] = "ABC DEF GHI";
	char str4[] = "C";
	char *nb; 
	char *aa; 

	nb = ft_strstr(str1, str2);
	printf("%s\n", nb);
	aa = strstr(str3, str4);
	printf("%s\n", nb);
}

