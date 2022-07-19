/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:15:11 by tytang            #+#    #+#             */
/*   Updated: 2022/02/05 15:52:32 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		counter;

	counter = 0;
	dest = (char *)malloc(sizeof (*src));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	source[] = "peepoo";

	printf("%s", ft_strdup(source));
	return (0);
}
*/
