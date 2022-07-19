/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:59:41 by tytang            #+#    #+#             */
/*   Updated: 2022/02/01 20:33:01 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	nb;

	nb = 3;
	ft_recursive_factorial(nb);
	printf("the factorial of %d is %d\n", nb, ft_recursive_factorial(nb));
	printf("the factorial of %d is %d\n ", -29, ft_recursive_factorial(-29));
	printf("the factorial of %d is %d\n", 0, ft_recursive_factorial(0));
	printf("the factorial of %d is %d\n", 1, ft_recursive_factorial(1));
	printf("the factorial of %d is %d\n", 2, ft_recursive_factorial(2));
	printf("the factorial of %d is %d\n", 12, ft_recursive_factorial(12));
	printf("the factorial of %d is %d\n", 3, ft_recursive_factorial(3));
	printf("the factorial of %d is %d\n", 4, ft_recursive_factorial(4));
	printf("the factorial of %d is %d\n", 5, ft_recursive_factorial(5));
	printf("the factorial of %d is %d\n", 7, ft_recursive_factorial(7));
	printf("the factorial of %d is %d\n", 8, ft_recursive_factorial(8));
	printf("the factorial of %d is %d\n", 9, ft_recursive_factorial(9));
	printf("the factorial of %d is %d\n", 10, ft_recursive_factorial(10));
	printf("the factorial of %d is %d\n", 11, ft_recursive_factorial(11));
	return (0);
}
*/
