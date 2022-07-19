/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:21:21 by tytang            #+#    #+#             */
/*   Updated: 2022/01/18 12:42:15 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* divides parameters a by b and stores the result in the integer pointed by div
 * stores remainder in the integer pointed by mod */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 32;
	b = 6;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	return (0);
}
*/
