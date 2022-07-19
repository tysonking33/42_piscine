/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:43:05 by tytang            #+#    #+#             */
/*   Updated: 2022/02/01 20:25:54 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	outcome;

	outcome = nb;
	if (nb < 0)
	{
		return (0);
	}
	while (nb == 1 || nb == 0)
	{
		return (1);
	}
	while (nb > 1)
	{
		outcome = outcome * (nb - 1);
		nb--;
	}
	return (outcome);
}
/*
int	main(void)
{
	int	nb;

	nb = 1300;
	ft_iterative_factorial(nb);
	printf("the factorial of %d is: %d\n", nb, ft_iterative_factorial(nb));
	printf("the factorial of %d is: %d\n", -18, ft_iterative_factorial(-18));
	printf("the factorial of %d is: %d\n", 0, ft_iterative_factorial(0));
	printf("the factorial of %d is: %d\n", 1, ft_iterative_factorial(1));
	printf("the factorial of %d is: %d\n", 2, ft_iterative_factorial(2));
	printf("the factorial of %d is: %d\n", 12, ft_iterative_factorial(12));
	printf("the factorial of %d is: %d\n", 3, ft_iterative_factorial(3));
	printf("the factorial of %d is: %d\n", 4, ft_iterative_factorial(4));
	printf("the factorial of %d is: %d\n", 5, ft_iterative_factorial(5));
	printf("the factorial of %d is: %d\n", 6, ft_iterative_factorial(6));
	printf("the factorial of %d is: %d\n", 7, ft_iterative_factorial(7));
	printf("the factorial of %d is: %d\n", 8, ft_iterative_factorial(8));
	printf("the factorial of %d is: %d\n", 10, ft_iterative_factorial(10));
	printf("the factorial of %d is: %d\n", 11, ft_iterative_factorial(11));
	return (0);
}
*/
