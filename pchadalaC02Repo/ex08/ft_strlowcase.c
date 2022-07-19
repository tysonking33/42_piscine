/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchadala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:34:30 by pchadala          #+#    #+#             */
/*   Updated: 2022/01/27 17:46:04 by pchadala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[]= "STD";
	char str2[]="std";
	char str3[]="123";

	ft_strlowcase(str1);
	printf("output for STD: %s\n", ft_strlowcase(str1));

	ft_strlowcase(str2);
	printf("output for std: %s\n", ft_strlowcase(str2));

	ft_strlowcase(str3);
	printf("output for 123: %s\n", ft_strlowcase(str3));

	return (0);
}
*/
