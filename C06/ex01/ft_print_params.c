/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:35:51 by tytang            #+#    #+#             */
/*   Updated: 2022/02/02 12:40:14 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	counter_outside;
	int	counter_inside;

	counter_outside = 1;
	while (counter_outside < argc)
	{
		counter_inside = 0;
		while (argv[counter_outside][counter_inside] != 0)
		{
			write(1, &argv[counter_outside][counter_inside], 1);
			counter_inside++;
		}
		write(1, "\n", 1);
		counter_outside++;
	}
	return (0);
}
