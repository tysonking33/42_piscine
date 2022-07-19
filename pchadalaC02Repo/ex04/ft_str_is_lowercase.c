/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchadala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:55:21 by pchadala          #+#    #+#             */
/*   Updated: 2022/01/27 17:43:32 by pchadala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char str3[]= "";

	ft_str_is_lowercase(str1);
	printf("output for STD: %d\n", ft_str_is_lowercase(str1));

	ft_str_is_lowercase(str2);
	printf("output for std: %d\n", ft_str_is_lowercase(str2));
	
	ft_str_is_lowercase(str3);
	printf("output for  :%d\n", ft_str_is_lowercase(str3));

	return (0);

}
*/
