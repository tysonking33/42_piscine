/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:49:34 by psingh            #+#    #+#             */
/*   Updated: 2022/01/25 14:19:03 by psingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*
int	main()
{
	char	*src;
	char	dest[20];

	src = "Hello World";
	printf("src : %s\n", src);
	strncpy(dest, src, 8);
	printf("copy : %s\n", dest);
	ft_strncpy(dest, src, 8);
	printf("dest(copied): %s\n", dest);
}*/
