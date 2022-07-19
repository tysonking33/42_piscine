/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:55:00 by jmarks            #+#    #+#             */
/*   Updated: 2022/01/24 12:01:00 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
		i++;
		}	
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "abd123";
	
	printf("input is: %s\n", str);
	printf("return: %d\n", ft_str_is_printable(str));
	return (0);
}*/
