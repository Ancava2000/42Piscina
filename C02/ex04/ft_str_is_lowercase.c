/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:29:05 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/07 11:11:02 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
    int result;

    result = ft_str_is_lowercase("asdf");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("999");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("");
    printf("Result: %d\n", result);

	return(0);
}
*/
