/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:28:21 by kimanche          #+#    #+#             */
/*   Updated: 2022/01/27 14:28:23 by kimanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0' && b < nb)
	{
		dest[a + b] = src [b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "Manchery";
	char dest[] = "Kiran";
	printf("%s", ft_strncat(dest, src, 3));
}
*/
