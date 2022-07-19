/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:38:16 by cstubbin          #+#    #+#             */
/*   Updated: 2022/01/18 13:06:49 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	character;

	character = 0;
	while (str[character] != '\0')
	{
		if (str[character] >= 'a' && str[character] <= 'z')
				str[character] -= 32;
		character++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "asdasdasd";

	printf("%s", ft_strupcase(str));
	return (0);
}
*/
