/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:43:26 by jmarchan          #+#    #+#             */
/*   Updated: 2022/01/26 17:35:09 by jmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[13] = "source string";
	char	dest[18] = "destination string";

	printf("Before\n\tsrc: %s\n\tdest: %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("After\n\tsrc: %s\n\tdest: %s\n", src, dest);
	return (0);
}*/
