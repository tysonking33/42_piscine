/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchadala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:04:01 by pchadala          #+#    #+#             */
/*   Updated: 2022/01/27 17:45:12 by pchadala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[]= "STD";
	char str2[]= "std";
	char str3[]= "123";
	
	ft_strupcase(str1);
	printf("output for STD : %s\n", ft_strupcase(str1));

	ft_strupcase(str2);
	printf("output for std: %s\n", ft_strupcase(str2));

	ft_strupcase(str3);
	printf("output for 123: %s\n", ft_strupcase(str3));

	return (0);
}
*/
