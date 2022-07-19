/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:50:18 by psingh            #+#    #+#             */
/*   Updated: 2022/01/27 16:15:23 by psingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a' || str[c] > 'z') && (str[c] < 'A' || str[c] > 'z'))
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
	printf("%d", ft_str_is_alpha("abcde"));
	printf("\n%d", ft_str_is_alpha(""));
	printf("\n%d", ft_str_is_alpha("-_1345"));
}*/
