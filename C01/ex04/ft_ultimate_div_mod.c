/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:24:00 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/05 18:20:26 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 36;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf(",%d", b);
}
*/
