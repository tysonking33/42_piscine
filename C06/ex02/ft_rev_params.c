/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:57:09 by tytang            #+#    #+#             */
/*   Updated: 2022/02/01 15:39:37 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	counter_outside;
	int	counter_inside;

	counter_outside = argc - 1;
	while (counter_outside >= 1)
	{
		counter_inside = 0;
		while (argv[counter_outside][counter_inside] != 0)
		{
			write(1, &argv[counter_outside][counter_inside], 1);
			counter_inside++;
		}
		write(1, "\n", 1);
		counter_outside--;
	}
	return (0);
}
