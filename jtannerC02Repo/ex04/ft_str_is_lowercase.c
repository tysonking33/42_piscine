/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:37:39 by jtanner           #+#    #+#             */
/*   Updated: 2022/01/25 14:24:52 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
			i++;
	}
	return (1);
}

/*
int main()
{
	int result;
	char *h = "kLesfile";
	char *j = "JAKESFILE";
	result = ft_str_is_lowercase(h); 
	if ( result == 1)
	{
		printf("lowercase");
	}
	else
	{
		printf("not lowrcase");
	}
//	printf("it is: %d\n", ft_str_is_lowercase(h));
//	printf("it is: %d\n", ft_str_is_lowercase(j));
}
*/
