/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:33:17 by tytang            #+#    #+#             */
/*   Updated: 2022/01/25 17:30:17 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
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
		if ((str[counter] >= 'A' && str[counter] <= 'Z')
			|| (str[counter] >= 'a' && str[counter] <= 'z'))
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
	char	str[] = "ab1cd";
	int	result;

	result = ft_str_is_alpha(str);
	printf("%d", result);
	return (0);
}
*/
