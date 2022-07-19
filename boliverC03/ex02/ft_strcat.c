/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boliver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:57:49 by boliver           #+#    #+#             */
/*   Updated: 2022/01/29 12:54:56 by boliver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;

	c = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[c] = *src;
		c++;
		src++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char dest[20] = "Hello";
	char src[] = ", world!";

	printf("----\ndest = %s\nsrc =%s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n----\n", dest);

	return (0);
}
*/
