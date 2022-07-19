/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:51:15 by svanden           #+#    #+#             */
/*   Updated: 2022/01/29 12:43:36 by svanden          ###   ########.fr       */
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

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%d", ft_strcmp("Hello", "Hello1"));
	printf("\n%d", ft_strcmp("Hello", "Hel"));
	printf("\n%d", ft_strcmp("Hel", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}*/
