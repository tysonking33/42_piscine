/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:41:02 by tytang            #+#    #+#             */
/*   Updated: 2022/02/01 13:13:34 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	counter;
	int	outcome;

	counter = 0;
	outcome = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (counter < power - 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (outcome);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 23;
	power = 0;
	printf("number is %d\n", nb);
	printf("power is %d\n", power);
	printf("outcome is %d\n", ft_recursive_power(nb, power));
}
*/
