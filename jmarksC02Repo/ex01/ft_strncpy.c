/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:15:03 by jmarks            #+#    #+#             */
/*   Updated: 2022/01/25 13:58:25 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
#include <stdio.h>
int main()
{
	char src[] = "abcdefgh";
	char dest[] = "";
	
	printf("src value: %s\n", src);
	printf("dest value : %s\n", dest);
	ft_strncpy(dest, src, 5);
	printf("dest is now the value of src with n characters: %s\n", dest);
	return (0);
}*/
