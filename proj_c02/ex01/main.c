/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:53:23 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/17 11:37:52 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char str1[] = "oi hello";
    char b[20];
    int num;
    int n;

    n = 4;
    num = 0;

    ft_strncpy(b, str1, n);
    while(num < n)
    {
        write(1, &b[num], 1);
        num++;
    }
    write(1, &"\n", 1);
}
