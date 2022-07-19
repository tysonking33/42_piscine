/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:33:51 by eclark            #+#    #+#             */
/*   Updated: 2022/01/31 14:33:07 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	n;

	n = nb;
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n > 0)
	{
		nb = n * (ft_recursive_factorial(n - 1));
		return (nb);
	}
	return (0);
}

/*
int main()
{
	
	int nb;

	nb = ;

	printf("factorial = %d\n", ft_recursive_factorial(nb));
}
*/
