/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchadala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:49:02 by pchadala          #+#    #+#             */
/*   Updated: 2022/01/27 17:42:02 by pchadala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}	
/*
#include<string.h>

	int	main(void)
	{
		char str1[]= "abcdefg";
		char str2[]= "123456";
		char str3[]= "a1b2c3";

		ft_str_is_alpha(str1);
		printf("Output for str1: %d\n", ft_str_is_alpha(str1));
		ft_str_is_alpha(str2);
		printf("Output for str2: %d\n", ft_str_is_alpha(str2));
		ft_str_is_alpha(str3);
		printf("Output for str3: %d\n", ft_str_is_alpha(str3));
		return (0);
	}
*/
