/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:03:44 by eclark            #+#    #+#             */
/*   Updated: 2022/01/31 14:28:54 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	i;

	n = 1;
	i = nb;
	if (power == 0 || nb == 1)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (n != power)
	{
		nb = i * nb;
		n++;
	}
	return (nb);
}
/*
int main()
{
	printf("%d\n", ft_iterative_power(5, -3));
}
*/
