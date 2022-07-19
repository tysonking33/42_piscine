/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:27:25 by tytang            #+#    #+#             */
/*   Updated: 2022/01/27 17:41:43 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while ((src[counter] != '\0') && (counter < n))
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	d[] = "abcdefg";
	char	s[] = "123456789";
	unsigned int	idx;

	idx = 5;
	ft_strncpy(d, s, idx);
	printf("%s", d);
	return (0);
}
*/
