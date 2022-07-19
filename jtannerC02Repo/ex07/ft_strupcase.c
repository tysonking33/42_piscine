/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:18:03 by jtanner           #+#    #+#             */
/*   Updated: 2022/01/25 14:22:40 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = (str[i] - 32);
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int  main(void)
{
	char h[] = "hello";
	printf("uppercase:%s\n", ft_strupcase(h));
}
*/
