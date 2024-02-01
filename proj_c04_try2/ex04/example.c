/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 16:21:35 by ael-hana          #+#    #+#             */
/*   Updated: 2024/01/25 14:04:11 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write (1, &c, 1);
}

void		ft_put_base(int nb, char *base)
{
	int		len;

	len = 0;
	while (base[len])
		len += 1;
	if (nb >= len)
	{
		ft_put_base(nb / len, base);
		ft_put_base(nb % len, base);
	}
	else
		ft_putchar(base[nb]);
}

char		check_str(char *str, char *str2)
{
	if (*str && *str2 && *str == *str2)
		return (check_str(str + 1, str2 + 1));
	if (*str == '\0' && *str2 == '\0')
		return (1);
	return (0);
}

void		ft_putnbr_base(int nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
	}
//	if (check_str(base, "0123456789"))
		ft_put_base(nbr, base);
//	else if (check_str(base, "01"))
//		ft_put_base(nbr, "01");
//	else if (check_str(base, "0123456789ABCDEF"))
//		ft_put_base(nbr, "0123456789ABCDEF");
//	else if (check_str(base, "poneyvif"))
//		ft_put_base(nbr, "01234567");
}
/*
int     main(void)
{
        ft_putnbr_base(10, "poneyvif");
        return (0);
}
*/
