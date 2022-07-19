/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:27:13 by jmanson           #+#    #+#             */
/*   Updated: 2022/02/01 17:07:54 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power > 0)
		nb = (nb * ft_recursive_power(nb, power - 1));
	if (power < 0)
		nb = (nb * ft_recursive_power(nb, power + 1));
	return (nb);
}

int	main(void)
{
	printf("6^2=%d\n", ft_recursive_power(6, 2));
	printf("-3^3=%d\n", ft_recursive_power(-3, 3));
	printf("%d\n", ft_recursive_power(-3, 99));
	printf("%d\n", ft_recursive_power(-3, 0));
	printf("%d\n", ft_recursive_power(-3, -2));
	return (0);
}

