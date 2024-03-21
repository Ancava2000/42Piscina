/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:16:15 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/07 11:09:24 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_str_is_alpha("asdf");
	printf("Result: %d\n", result);
	result = ft_str_is_alpha("QWERTY");
	printf("Result: %d\n", result);
	result = ft_str_is_alpha("asdf1234");
	printf("Result: %d\n", result);
	result = ft_str_is_alpha("999");
	printf("Result: %d\n", result);
	result = ft_str_is_alpha("");
	printf("Result: %d\n", result);
	return (0);
}
*/
