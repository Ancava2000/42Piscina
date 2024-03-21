/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:41:06 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/07 11:13:32 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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

    result = ft_str_is_printable("asdf");
    printf("Result: %d\n", result);

    result = ft_str_is_printable("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_printable("df\x0A");
    printf("Result: %d\n", result);

    result = ft_str_is_printable("999");
    printf("Result: %d\n", result);

    result = ft_str_is_printable("");
    printf("Result: %d\n", result);

	return(0);
}
*/
