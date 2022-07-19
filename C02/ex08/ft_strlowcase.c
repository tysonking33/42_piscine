/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:49:18 by tytang            #+#    #+#             */
/*   Updated: 2022/01/26 14:54:14 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	str[] = "A1CDE";

	printf("%s", ft_strlowcase(str));
	return (0);
}
*/
