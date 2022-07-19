/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchadala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:42:19 by pchadala          #+#    #+#             */
/*   Updated: 2022/01/27 17:44:35 by pchadala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char str5[]= "  ";

ft_str_is_printable(str1);
printf("output for STD: %d\n", ft_str_is_printable(str1));

ft_str_is_printable(str2);
printf("output for std: %d\n", ft_str_is_printable(str2));

ft_str_is_printable(str3);
printf("output for 143: %d\n", ft_str_is_printable(str3));

ft_str_is_printable(str4);
printf("output for empty: %d\n", ft_str_is_printable(str4));

ft_str_is_printable(str5);
printf("output for spacebar: %d\n", ft_str_is_printable(str5));

return (0);
}
*/
