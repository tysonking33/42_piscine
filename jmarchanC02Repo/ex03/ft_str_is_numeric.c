/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:39:32 by jmarchan          #+#    #+#             */
/*   Updated: 2022/01/29 11:55:35 by jmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < '0' || str[a] > '9')
			return (0);
			a++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "123456789";
	char	*str2 = " ";
	char	*str3 = "1a2b3c";

	printf("%u\n", ft_str_is_numeric(str1));
	printf("%u\n", ft_str_is_numeric(str2));
	printf("%u\n", ft_str_is_numeric(str3));
}*/
