/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:24:28 by tytang            #+#    #+#             */
/*   Updated: 2022/02/05 15:53:11 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	counter;
	int	difference;

	difference = 0;
	array = malloc(sizeof(int) * difference);
	counter = 0;
	difference = max - min;
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
	{
		return (-1);
	}
	if (min > max)
	{
		*range = NULL;
		return (0);
	}
	return (max - min);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*chad;

	min = 23;
	max = 4;
	printf("%d", ft_ultimate_range(&chad, min, max));
	return (0);
}
*/
