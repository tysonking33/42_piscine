/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:08:42 by jpatel            #+#    #+#             */
/*   Updated: 2022/01/26 15:32:41 by jpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (str[i] != '\0' && i < bn)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str2[32] = "This is the end";
	char	str1[] = "This is the start";
	int	n;

	n = 6;
	printf ("%s", ft_strncat(str1, str2, n));
	return (0);
}*/
