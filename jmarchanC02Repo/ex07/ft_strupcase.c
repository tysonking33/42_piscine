/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:51:31 by jmarchan          #+#    #+#             */
/*   Updated: 2022/01/29 10:25:07 by jmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a') && (str[a] <= 'z'))
			str[a] -= 'a' - 'A';
		a++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "abcdefghijklmnopqrstuvwxyz";
	char	str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	str3[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
}*/
