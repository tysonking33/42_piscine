/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:19:47 by tytang            #+#    #+#             */
/*   Updated: 2022/02/01 13:14:22 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	outcome;
	int	counter;

	outcome = 1;
	counter = 0;
	if (power < 0)
	{
		return (0);
	}
	while (counter < power)
	{
		outcome = outcome * nb;
		counter++;
	}
	return (outcome);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = -3;
	power = 3;
	printf("number = %d\n", nb);
	printf("power is %d\n", power);
	printf("outcome is %d\n", ft_iterative_power(nb, power));
	return (0);
}
*/
