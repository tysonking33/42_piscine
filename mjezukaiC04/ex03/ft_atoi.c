/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjezukai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:05:14 by mjezukai          #+#    #+#             */
/*   Updated: 2022/01/31 17:20:44 by mjezukai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	spc(char a)
{
	if (a == '\t')
		return (1);
	if (a == '\n')
		return (1);
	if (a == '\v')
		return (1);
	if (a == '\f')
		return (1);
	if (a == '\r')
		return (1);
	if (a == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	x;
	int	pos;
	int	result;

	x = 0;
	pos = 1;
	result = 0;
	while (spc(str[x]) == 1)
		x ++;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			pos *= -1;
		x ++;
	}
	while (str[x] <= '9' && str[x] >= '0')
	{
		result = (result * 10) + str[x] - '0';
		x ++;
	}
	result *= pos;
	return (result);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("%d\n", ft_atoi(argv[1]));
}*/
