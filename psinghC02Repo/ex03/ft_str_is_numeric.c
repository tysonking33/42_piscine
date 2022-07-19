/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:50:18 by psingh            #+#    #+#             */
/*   Updated: 2022/01/27 13:26:55 by psingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < '0' || str[c] > '9')
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_numeric("abcde"));
	printf("\n%d", ft_str_is_numeric(""));
	printf("\n%d", ft_str_is_numeric("012"));
}*/
