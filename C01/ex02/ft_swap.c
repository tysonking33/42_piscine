/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:24:43 by tytang            #+#    #+#             */
/*   Updated: 2022/01/18 12:41:15 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* swaping the values of 2 integers who addresses are entered as parameters*/

void	ft_swap(int *a, int *b)
{
	int	middle_ground;

	middle_ground = *a;
	*a = *b;
	*b = middle_ground;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptr_of_a;
	int	*ptr_of_b;

	a = 2;
	b = 4;
	ptr_of_a = &a;
	ptr_of_b = &b;
	ft_swap(ptr_of_a, ptr_of_b);
	return (0);
}
*/
