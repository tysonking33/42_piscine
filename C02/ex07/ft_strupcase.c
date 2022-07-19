/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:05:41 by tytang            #+#    #+#             */
/*   Updated: 2022/01/26 14:28:52 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	str[] = "ab1Cde";

	printf("%s", ft_strupcase(str));
	return (0);
}
*/
