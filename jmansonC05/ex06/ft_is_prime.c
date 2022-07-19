/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:48:53 by jmanson           #+#    #+#             */
/*   Updated: 2022/02/01 14:22:24 by jmanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	if (nb == 1 || nb == 0)
	{
		return (0);
	}
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
	{
		return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_is_prime(434195557));	
	printf("%d\n", ft_is_prime(-431432982));	
	printf("%d\n", ft_is_prime(0));	
	printf("%d\n", ft_is_prime(-7));	
	return (0);
}
*/
