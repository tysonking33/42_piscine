/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstubbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:56:36 by cstubbin          #+#    #+#             */
/*   Updated: 2022/01/20 08:11:53 by cstubbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	character;

	character = 0;
	while (str[character] != '\0')
	{
		if (str[character] >= 'A' && str[character] <= 'Z')
				str[character] += 32;
		character++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "AaasdASDASdBC";

	printf("%s", ft_strlowcase(str));
	return (0);
}
*/
