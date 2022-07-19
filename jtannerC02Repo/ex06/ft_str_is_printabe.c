/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printabe.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtanner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:40:03 by jtanner           #+#    #+#             */
/*   Updated: 2022/01/26 14:35:32 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 33 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
	char *h = "JakesFili";
	int result;

	result = ft_str_is_printable(h);
	if (result == 1)
	{
		printf("printable");
	}
	else
	{
		printf("not printable");
	}
}
*/
