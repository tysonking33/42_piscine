/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:58:44 by jtanner           #+#    #+#             */
/*   Updated: 2022/01/25 14:29:20 by jtanner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
			i++;
	}
	return (1);
}

/*
int main(void)
{
char *h = "JAKESFILE";
char j[] = "uh";
int result;

result = ft_str_is_uppercase(j);
if (result == 1)
{
	printf("uppercase");
}
	else
	{
		printf("not uppercase");
	}
}
*/
