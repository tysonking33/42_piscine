/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:49:54 by jtanner           #+#    #+#             */
/*   Updated: 2022/01/26 12:33:17 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*hold;
	char	i;

	i = 0;
	if ((dest == NULL) && (src == NULL))
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
	char src[] = "jakesfile";
	char dest[12] = {0};

	ft_strncpy(dest, src, 12);
	printf("%s\n", dest);
	return (0);
	}
*/
