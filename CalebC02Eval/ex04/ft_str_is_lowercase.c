/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:02:35 by cstubbin          #+#    #+#             */
/*   Updated: 2022/01/18 13:02:39 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	character;

	character = 0;
	while (str[character] != '\0')
	{
		if (str[character] < 'a' || str[character] > 'z')
			return (0);
		character++;
	}
	return (1);
}
/*
int main()
{
	char str[] = "asdasd";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
*/
