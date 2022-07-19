/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:17:46 by tytang            #+#    #+#             */
/*   Updated: 2022/01/25 17:32:38 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
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
		if (str[counter] >= 32 && str[counter] <= 127)
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
	char	str[] = "gamer";
	int	result;

	result = ft_str_is_printable(str);
	printf("%d", result);
	return (0);
}
*/
