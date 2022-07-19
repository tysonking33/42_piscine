/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boliver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 08:34:47 by boliver           #+#    #+#             */
/*   Updated: 2022/01/29 12:51:39 by boliver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int strncmp(const char *s1, const char *s2, size_t n);
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	const	char str1[]	= "aaaacde";
	const	char str2[]	= "aaa";

  	char str3[] = "aaaacde";
	char str4[] = "aaa";
	unsigned int nb = 2;

	printf("Strncmo: %d ", strncmp(str1, str2, 0));
	printf("ft_strncmp: %d ", ft_strncmp(str3, str4, 0));
	printf("src: %s ", str1);
	printf("Search: %s ",  str2);
	return (0);
}
*/
