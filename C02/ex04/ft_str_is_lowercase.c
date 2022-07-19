/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:43:30 by tytang            #+#    #+#             */
/*   Updated: 2022/01/25 17:31:23 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	counter;
	int	result;

	counter = 0;
	result = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			result = 1;
			counter++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
/*
int	main(void)
{
	char	str[] = "abcd";
	int	result;

	result = ft_str_is_lowercase(str);
	printf("%d", result);
	return (0);
}
*/
