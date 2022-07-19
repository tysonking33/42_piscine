/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boliver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:37:31 by boliver           #+#    #+#             */
/*   Updated: 2022/01/29 12:44:49 by boliver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int strcmp(const char *s1, const char *s2);
int ft_strcmp(char *s1, char *s2);

int main(void)
{
		char str1[]	= "aaa";
		char str2[]	= "aaab";

	//printf("Strcmo: %d ", strcmp(str1, str2));
	printf("ft_strcmp: %d ", ft_strcmp(str1, str2));
	printf("src: %s ", str1);
	printf("Search: %s ",  str2);
	return (0);
}
*/
