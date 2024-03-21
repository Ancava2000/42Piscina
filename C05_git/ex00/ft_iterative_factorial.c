/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:29:40 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/15 10:13:13 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (j != (nb + 1))
		{
			i *= j;
			j++;
		}
	}
	return (i);
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(-32));
	return(0);
}*/
