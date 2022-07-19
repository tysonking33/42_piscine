/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:19:14 by cstubbin          #+#    #+#             */
/*   Updated: 2022/01/18 13:02:06 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	character;

	character = 0;
	while (str[character] != '\0')
	{
		if (str[character] < '0' || str[character] > '9')
			return (0);
			character++;
	}
	return (1);
}
/*
int main()
{
	char	str[] = "12312";

	printf("%d", ft_str_is_numeric(str));
	return (0);
}
*/
