/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:53:23 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/18 13:59:50 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str1[] = "sAAAAAalut, cOmmenT TU vas ? 42MOts QQQuarante-eux; cinquante+eEt+Uun";
//	char str1[] = "    .";

	printf("%s\n", ft_strcapitalize(str1));
}
