/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:09:44 by tytang            #+#    #+#             */
/*   Updated: 2022/01/29 18:37:46 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;
	unsigned int	outcome;

	counter = 0;
	outcome = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[counter] != '\0') && (s2[counter] != '\0')
		&& (s1[counter] == s2[counter]) && (counter < n - 1))
	{
		counter++;
	}
	outcome = s1[counter] - s2[counter];
	return (outcome);
}
/*
int	main(void)
{
	char	s1[] = "gamer";
	char	s2[] = "gomer";
	unsigned int	n;
	unsigned int	result;

	n = 1;
	result = ft_strncmp(s1, s2, n);
	printf("%d", result);
	return (0);
}
*/
