/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:53:23 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/18 14:25:59 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char str1[] = "Hello there, Venus";
    char b[20];
    int num;
    int n;
    int myret;

    n = 1;
    num = 0;

    myret = ft_strlcpy(b, str1, 10);
////    myret = strlcpy(b, str1, 10);
    printf("%d\n", myret);
    printf("%s\n", b);

/*
    while(b[num] != '\0')
    {
        write(1, &b[num], 1);
        num++;
    }
    write(1, &"\n", 1);
    */
}
