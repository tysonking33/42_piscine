/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:01:44 by tytang            #+#    #+#             */
/*   Updated: 2022/01/25 17:31:59 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
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
		if (str[counter] >= 'A' && str[counter] <= 'Z')
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
	char	str[] = "SP";
	int	result;

	result = ft_str_is_uppercase(str);
	printf("%d", result);
	return (0);
}
*/
