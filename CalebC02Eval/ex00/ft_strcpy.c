/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:18:10 by cstubbin          #+#    #+#             */
/*   Updated: 2022/01/20 13:55:39 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	size;

	size = 0;
	while (src[size] != '\0')
	{			
		dest[size] = src[size];
			size++;
	}
	dest[size] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[] = "Copy Failed";
	char src[] = "Copy Succeeded";
	/*ft_strcpy(dest, src); */
	printf ("%s\n", dest);
	return (0);
}
