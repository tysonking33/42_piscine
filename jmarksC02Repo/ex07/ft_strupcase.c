/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:55:00 by jmarks            #+#    #+#             */
/*   Updated: 2022/01/24 15:51:08 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] - 'a') + 'A');
		i++;
	}	
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "abcd"; 
		
	printf("input is: %s\n", str);
	printf("return uppercase: %s\n", ft_strupcase(str));
	return (0);
}*/
