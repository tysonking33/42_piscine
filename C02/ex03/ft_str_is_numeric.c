/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:51:13 by tytang            #+#    #+#             */
/*   Updated: 2022/01/25 17:30:48 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	outcome;

	counter = 0;
	outcome = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	while (str[counter] != '\0')
	{
		if (str[counter] >= '0' && str[counter] <= '9')
		{
			outcome = 1;
			counter++;
		}
		else
		{
			return (0);
		}
	}
	return (outcome);
}
/*
int	main(void)
{
	char	str[] = "a234";
	int	result;

	result = ft_str_is_numeric(str);
	printf("%d", result);
	return (0);
}
*/
