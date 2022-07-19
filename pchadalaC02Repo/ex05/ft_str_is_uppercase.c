/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchadala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:12:38 by pchadala          #+#    #+#             */
/*   Updated: 2022/01/27 17:44:00 by pchadala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char str1[]= "STD";
	char str2[]= "std";
	char str3[]= "143";
	char str4[]= "";

	ft_str_is_uppercase(str1);
	printf("output for STD : %d\n", ft_str_is_uppercase(str1));

	ft_str_is_uppercase(str2);
	printf("output for std: %d\n", ft_str_is_uppercase(str2));

	ft_str_is_uppercase(str3);
	printf("output for 143: %d\n", ft_str_is_uppercase(str3));

	ft_str_is_uppercase(str4);
	printf("output for   :%d\n", ft_str_is_uppercase(str4));

	return (0);

}
*/
