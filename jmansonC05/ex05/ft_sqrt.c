/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:20:59 by jmanson           #+#    #+#             */
/*   Updated: 2022/02/01 15:15:47 by jmanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	num;

	num = 1;
	if (nb <= 0 || nb >= 2147483647)
		return (0);
	while (nb >= num * num)
	{
		if (nb == num * num)
			return (num);
		num++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("sqrt=%d\n", ft_sqrt(2147395600));
	printf("sqrt16=%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(1640347393));
	printf("%d\n", ft_sqrt(1));
}
*/
