/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:55:00 by jmarks            #+#    #+#             */
/*   Updated: 2022/01/24 15:54:05 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ((str[i] - 'A') + 'a');
		i++;
	}	
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "ABGF"; 
		
	printf("input is: %s\n", str);
	printf("return lowercase: %s\n", ft_strlowcase(str));
	return (0);
}*/
