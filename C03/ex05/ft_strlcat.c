/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:48:33 by acarro-v          #+#    #+#             */
/*   Updated: 2024/03/10 17:45:12 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r_d;
	unsigned int	r_s;

	i = ft_strlen(dest);
	j = 0;
	r_d = ft_strlen(dest);
	r_s = ft_strlen(src);
	if (size < 1)
	{
		return (r_s + size);
	}
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < r_d)
		return (r_s + size);
	else
		return (r_d + r_s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[26] = "Me va a dar ";
	char	b[] = "algo mu chungo";
	int	n = 27;
	printf("%d\n", ft_strlcat(a, b, n));
	printf("%s", a);
}
*/
