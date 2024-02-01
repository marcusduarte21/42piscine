/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mymain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:53:23 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/19 10:46:13 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    	char str4[] = "This is ";
        char str3[] = "a potentially long string";
    	int okret;
	okret = ft_strlcat(str3, str4, 50);
	printf("%s\n", str3);
	printf("%d\n", okret);
}
