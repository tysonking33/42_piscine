/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:40:09 by jtanner           #+#    #+#             */
/*   Updated: 2022/01/26 14:34:20 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		++i;
	}
	return (1);
}


int main()
{
	char *h;
	char *j;

	h = "helloworld";
	j = "12345";
		printf("the string is %d\n", ft_str_is_alpha(h));
		printf("the string is %d", ft_str_is_alpha(j));
}

