/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchadala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:02:33 by pchadala          #+#    #+#             */
/*   Updated: 2022/01/27 17:42:47 by pchadala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
	int	main(void)
	{
	char *str1= "143";
	char *str2= "STD";
	char *str3= "";

	ft_str_is_numeric(str1);
	printf("output for str1: %d\n", ft_str_is_numeric(str1));

	ft_str_is_numeric(str2);
	printf("output for str2: %d\n", ft_str_is_numeric(str2));

	ft_str_is_numeric(str3);
	printf("output for str3: %d\n", ft_str_is_numeric(str3));

	return (0);
	}
*/
