/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:17:01 by jmarchan          #+#    #+#             */
/*   Updated: 2022/01/27 13:37:33 by jmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			a++;
		}
		else if (str[a] >= 'A' && str[a] <= 'Z')
		{
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	char	*test1 = "dfhjkldwoiuyfghjnop";
	char	*test2 = "12345678998765432";
	char	*test3 = " ";
	char	*test4 = "HIJKHFJKEHGJKLALMNOP";
	char	*test5 = "Forty Two Is The Answer";

	printf("%d\n", ft_str_is_alpha(test1));
	printf("%d\n", ft_str_is_alpha(test2));
	printf("%d\n", ft_str_is_alpha(test3));
	printf("%d\n", ft_str_is_alpha(test4));
	printf("%d\n", ft_str_is_alpha(test5));
}*/
