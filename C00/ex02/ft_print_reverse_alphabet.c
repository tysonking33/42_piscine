/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:45:24 by tytang            #+#    #+#             */
/*   Updated: 2022/01/13 11:51:10 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	alphabet;

	alphabet = 122;
	while (alphabet >= 97)
	{
		write (1, &alphabet, 1);
		alphabet--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
