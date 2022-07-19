/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:21:18 by psingh            #+#    #+#             */
/*   Updated: 2022/01/27 13:35:37 by psingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 32 || str[c] > 126)
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
	printf("%d", ft_str_is_printable("abcde"));
	printf("\n%d", ft_str_is_printable("\n\t"));
	printf("\n%d", ft_str_is_printable("ABCD12"));
}*/
