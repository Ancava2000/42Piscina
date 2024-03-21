/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:25:09 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/15 10:14:44 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power < 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_recursive_power(2, 7));
	return (0);
}*/
