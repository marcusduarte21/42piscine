/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:53:23 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/17 11:27:45 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
char *ft_strcpy(char *dst, char *src);

int main(void)
{
    char str1[] = "oi hello world abc";
    char b[20];
    int num;
    int n;

    n = 18;
    num = 0;

    ft_strcpy(b, str1);
    while(num < n)
    {
        write(1, &b[num], 1);
        num++;
    }
    write(1, &"\n", 1);
}
