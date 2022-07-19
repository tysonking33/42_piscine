/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchadala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:08:01 by pchadala          #+#    #+#             */
/*   Updated: 2022/01/27 17:41:12 by pchadala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>

int main(void)

{
	char src[]= "Hello Surya";
	char dest[20];

	ft_strncpy(dest, src, 7);
    printf("dest 7: %s\n", ft_strncpy(dest, src, 7));
	ft_strncpy(dest, src, 13);
	printf("dest 13: %s\n", ft_strncpy(dest, src, 13));
	return (0);
}
*/
