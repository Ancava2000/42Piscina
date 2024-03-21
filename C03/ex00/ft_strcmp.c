/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:19:36 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/10 15:38:17 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
/*
#include <stdio.h>
int main ()
{
	char *str1 = "jonas";
	char *str2 = "jonaa";

	printf("%d", ft_strcmp(str1, str2));	
}
*/
