/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:33:42 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/15 11:40:37 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mydiv;
	int	mymod;

	mydiv = *a / *b;
	mymod = *a % *b;
	*a = mydiv;
	*b = mymod;
}
