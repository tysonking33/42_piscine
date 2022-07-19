/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:27:46 by jtanner           #+#    #+#             */
/*   Updated: 2022/01/25 15:30:38 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int  main(void)
{
	char h[] = "HELLO";
	printf("uppercase:%s\n", ft_strlowercase(h));
}
*/
