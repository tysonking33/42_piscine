/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjezukai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:20:49 by mjezukai          #+#    #+#             */
/*   Updated: 2022/01/19 14:39:38 by mjezukai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;
	int	x;

	len = 0;
	x = 0;
	while (str[len])
	{
		len ++;
	}
	return (len);
}
/*
int	main(void)
{
	int a;

	a = ft_strlen("ee");
	printf("%d",a);
}
*/
