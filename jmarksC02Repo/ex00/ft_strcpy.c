/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:18:40 by jmarks            #+#    #+#             */
/*   Updated: 2022/01/26 12:25:04 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
/*
#include <stdio.h>
int main()
{
	char src[] = "America";
	char dest[] = "Africa";
	
		printf("src value:%s\n", src);
		printf("dest value:%s\n", dest);
		ft_strcpy(src, dest);
		printf("src value is now dest:%s\n", src);
		return (0);
}*/
