/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:34:34 by tytang            #+#    #+#             */
/*   Updated: 2022/02/05 15:52:51 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	difference;
	int	counter;

	difference = max - min;
	array = malloc(sizeof(int) * (difference));
	counter = 0;
	if (array == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	while (counter < difference)
	{
		array[counter] = min + counter;
		counter++;
	}
	return (array);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	counter;
	int	difference;

	min = 4;
	max = 6;
	counter = 0;
	difference = max - min;
	while (counter < difference)
	{
		printf("%d\n", *ft_range(min, max));
		counter++;
	}
	return (0);
}
*/
