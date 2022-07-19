/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:57:34 by cstubbin          #+#    #+#             */
/*   Updated: 2022/01/20 08:09:22 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	size;

	size = 0;
	while (src[size] && size < n)
	{
		dest[size] = src[size];
			size++;
	}
	while (size < n)
	{
		dest[size] = '\0';
		size++;
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[20];
	char src[] = "Copy has Succeeded";
	printf("%s\n", ft_strncpy(dest, src, 6));
	printf("\n");
	return (0);
}
*/
