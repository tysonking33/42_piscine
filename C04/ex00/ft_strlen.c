/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:00:15 by tytang            #+#    #+#             */
/*   Updated: 2022/01/31 14:08:15 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
/*
int	main(void)
{
	char	str[] = "ionknowboutubutifeel22";
	int	number_of_characters;
	number_of_characters = ft_strlen(str);
	printf("%d", number_of_characters);
	return (0);
}
*/
