/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:33:59 by tytang            #+#    #+#             */
/*   Updated: 2022/02/01 13:00:16 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter_dest;
	unsigned int	counter_src;

	counter_dest = 0;
	counter_src = 0;
	while (dest[counter_dest] != '\0')
	{
		counter_dest++;
	}
	while ((counter_src < nb) && (src[counter_src] != '\0'))
	{
		dest[counter_dest] = src[counter_src];
		counter_dest++;
		counter_src++;
	}
	dest[counter_dest] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[20] = "big";
	char	src[] = "uWuOwO";
	unsigned int	nb;

	nb = 3;
	ft_strncat(dest, src, nb);
	printf("%s", dest);
	return (0);
}
*/
