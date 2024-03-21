/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:35:20 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/15 10:16:00 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 0;
	if (sqr < 0)
	{
		return (0);
	}
	while ((sqr * sqr) < nb)
	{
		sqr++;
	}
	if (sqr * sqr == nb)
	{
		return (sqr);
	}
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
	int i = 25;
	printf("%d", ft_sqrt(i));
	return (0);
}*/
