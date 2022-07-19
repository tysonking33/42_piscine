/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchadala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:49:57 by pchadala          #+#    #+#             */
/*   Updated: 2022/01/27 17:39:28 by pchadala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
 
#include<stdio.h>
#include<string.h>

int main(void)
{
	char source[] = "Hello Surya";
	char destination[] ="";

	ft_strcpy(destination, source);
	printf("%s\n", destination);
	return (0);
}
*/
