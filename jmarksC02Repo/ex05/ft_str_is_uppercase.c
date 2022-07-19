/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:55:00 by jmarks            #+#    #+#             */
/*   Updated: 2022/01/24 10:11:11 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			str++;
		}
		else if (*str == 0)
		{
			return (1);
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
	char str[] = "ABCDE";
	
	printf("input is: %s\n", str);
	printf("return: %d\n", ft_str_is_uppercase(str));
	return (0);
}*/
