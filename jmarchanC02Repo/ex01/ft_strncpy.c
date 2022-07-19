/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:35:49 by jmarchan          #+#    #+#             */
/*   Updated: 2022/01/27 13:37:12 by jmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((src[a] != '\0') && (a < n))
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "source string";
	char	dest[] = "destination string";
	unsigned int	n;

	n = 2;

	printf("Before\n\tsrc: %s\n\tdest: %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("After\n\tsrc: %s\n\tdest: %s\n", src, dest);
	return (0);
}*/
