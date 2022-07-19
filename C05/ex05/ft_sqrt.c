/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:39:37 by tytang            #+#    #+#             */
/*   Updated: 2022/02/02 12:28:30 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	divisor;

	divisor = 0;
	if (nb <= 0 || nb > 2147483647)
	{
		return (0);
	}
	while ((nb > divisor * divisor) && (divisor <= 46340))
	{
		divisor++;
	}
	if (nb == divisor * divisor)
	{
		return (divisor);
	}
	return (0);
}
/*
int	main(void)
{
	int	dividend;

	dividend = -3245;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 0;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 1;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 2;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 1640045925;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 2147395600;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 2147483646;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 1689538816;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 1462556408;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 214622500;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 150232993;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 1548107716;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 1313782204;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 392436100;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 467101797;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 1641627289;
	printf("%d\n", ft_sqrt(dividend));
	dividend = 2105177392;
	printf("%d\n", ft_sqrt(dividend));
	return (0);
}
*/
