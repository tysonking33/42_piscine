/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:21:51 by tytang            #+#    #+#             */
/*   Updated: 2022/02/02 12:38:48 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	counter_inside;

	argc = 0;
	counter_inside = 0;
	while (argv[argc][counter_inside] != 0)
	{
		write(1, &argv[argc][counter_inside], 1);
		counter_inside++;
	}
	write(1, "\n", 1);
	return (0);
}
