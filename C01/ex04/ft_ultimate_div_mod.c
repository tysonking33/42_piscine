/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:42:59 by tytang            #+#    #+#             */
/*   Updated: 2022/01/18 12:42:49 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* divide a by b, store the results in a
 *remainder is stored by b */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dividend;

	dividend = *a;
	*a = *a / *b;
	*b = dividend % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}
*/
