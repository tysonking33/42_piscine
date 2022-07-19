/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:33:51 by eclark            #+#    #+#             */
/*   Updated: 2022/01/31 14:41:15 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (n < 0)
	{
		return (0);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	while (n > 1)
	{
		nb = nb * (n - 1);
		n--;
	}
	return (nb);
}
/*
int main()
{
	
	int nb;

	nb = 4;

	printf("factorial = %d\n", ft_iterative_factorial(nb));
}
*/
