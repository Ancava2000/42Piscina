/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:35:02 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/07 11:12:26 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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

    result = ft_str_is_uppercase("asdf");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("999");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("");
    printf("Result: %d\n", result);

	return(0);
}
*/
