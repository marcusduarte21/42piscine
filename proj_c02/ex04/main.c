/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:53:23 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/17 14:41:07 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char str1[] = "";
//	char b[20];
	int num;
 	int n;
	
	n = 4;
	num = ft_str_is_lowercase(str1);
	printf("%d\n", num);
	/*
	while(num < n)
	{
		write(1, &b[num], 1);
		num++;
	}
	write(1, &"\n", 1);
	*/
}
