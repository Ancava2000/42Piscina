/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:27:52 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/07 16:39:18 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	upper;

	a = 0;
	upper = 1;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if ((str[a] <= 122 && str[a] >= 97) || (str[a] >= '0' && str[a] <= '9'))
		{
			if ((str[a] <= 122 && str[a] >= 97) && (upper == 1))
			{
				str[a] -= 32;
			}
			upper = 0;
			a++;
		}
		else if ((str[a] > 122 || str[a] < 97) || (str[a] < '0'
				|| str[a] > '9'))
		{
			upper = 1;
			a++;
		}
	}
	return (str);
}
/*
#include <stdio.h>
int main (void)
{
	char str[] = "salut commmm 42abs";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
*/
