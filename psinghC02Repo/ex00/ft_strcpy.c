/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:48:14 by psingh            #+#    #+#             */
/*   Updated: 2022/01/25 17:07:47 by psingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main()
{
	char *src;
	char dest[12];

	src = "Hello World";
	printf("src : %s\n", src);
	strcpy(dest, src);
	printf("copy : %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest(copied): %s\n", dest);
}*/
