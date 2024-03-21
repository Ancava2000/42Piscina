/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:18:44 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/05 18:24:26 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;

	index = 0;
	c = 0;
	while (index < (size / 2))
	{
		c = tab[index];
		tab[index] = tab[size -1 - index];
		tab[size -1 - index] = c;
		index++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5};
	int	size = 6;

	return (0);
}
*/
