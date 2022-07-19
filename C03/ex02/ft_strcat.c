/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:02:42 by tytang            #+#    #+#             */
/*   Updated: 2022/01/30 12:55:59 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcat(char	*dest, char *src)
{
	int	counter_dest;
	int	counter_src;

	counter_dest = 0;
	counter_src = 0;
	while (dest[counter_dest] != '\0')
	{
		dest[counter_dest] = dest[counter_dest];
		counter_dest++;
	}
	while (src[counter_src] != '\0')
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
	char	dest[100] = "peepee";
	char	src[] = "poopoo";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}
*/
