/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:30:31 by jmarchan          #+#    #+#             */
/*   Updated: 2022/01/27 16:42:05 by jmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 32) || (str[a] > 126))
			return (0);
		a++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "qwertyuiopasdfghjklzxcvbnm";
	char	*str2 = "1234567890";
	char	*str3 = "!@#$%^&*()";
	char	*str4 = " ";
	char	*str5 = "	";

	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
	printf("%d\n", ft_str_is_printable(str5));
}*/
