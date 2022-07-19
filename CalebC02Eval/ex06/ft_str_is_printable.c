/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:22:47 by cstubbin          #+#    #+#             */
/*   Updated: 2022/01/18 13:05:27 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	character;

	character = 0;
	while (str[character] != '\0')
	{
		if (str[character] < 32 || str[character] > 126)
			return (0);
		character ++;
	}
	return (1);
}
/*
int main()
{
	char str[] = "º";
	printf("%d", ft_str_is_printable(str));
	return (0);
}
*/
