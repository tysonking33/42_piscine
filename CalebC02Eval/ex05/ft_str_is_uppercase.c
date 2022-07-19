/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:17:17 by cstubbin          #+#    #+#             */
/*   Updated: 2022/01/18 13:03:57 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	character;

	character = 0;
	while (str[character] != '\0')
	{
		if (str[character] < 'A' || str[character] > 'Z')
			return (0);
			character++;
	}
	return (1);
}
/*
int main()
{
	char str[] = "";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
*/
