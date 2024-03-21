/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:40:15 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/16 11:57:30 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb *= temp;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d", ft_iterative_power(3, 4));
}*/
