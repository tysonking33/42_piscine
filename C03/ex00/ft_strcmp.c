/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:28:21 by tytang            #+#    #+#             */
/*   Updated: 2022/01/25 12:22:05 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_no_starting_null(char *s1, char *s2)
{
	int	counter;
	int	outcome;

	counter = 0;
	outcome = 0;
	while (s1[counter] != '\0' || s2[counter] != '\0')
	{
		if (s1[counter] == s2[counter])
		{
			counter++;
		}
		else
		{
			outcome = s1[counter] - s2[counter];
			break ;
		}
	}
	return (outcome);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;
	int	outcome;

	counter = 0;
	outcome = 0;
	if (s1[counter] == '\0' && s2[counter] == '\0')
	{
		return (0);
	}
	else if (s1[counter] != '\0' && s2[counter] == '\0')
	{
		outcome = s1[0] - s2[0];
	}
	else if (s1[counter] == '\0' && s2[counter] != '\0')
	{
		outcome = s1[0] - s2[0];
	}
	else
	{
		outcome = ft_no_starting_null (s1, s2);
	}
	return (outcome);
}
/*
int	main(void)
{
	char	s1[] = "tyson";
	char	s2[] = "tyzon";
	int	result;

	result = ft_strcmp(s1, s2);
	printf("%d", result);
	return (0);
}
*/
