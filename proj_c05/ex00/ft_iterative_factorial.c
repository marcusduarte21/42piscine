/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlages-d <mlages-d@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:29:14 by mlages-d          #+#    #+#             */
/*   Updated: 2024/01/26 11:14:00 by mlages-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb >= 1)
		{
			total = nb * total;
			nb--;
		}
	}
	return (total);
}
/*
int	main(void)
{
	int num; 
	num = ft_iterative_factorial(2);
	printf("%d\n", num);
}
*/
