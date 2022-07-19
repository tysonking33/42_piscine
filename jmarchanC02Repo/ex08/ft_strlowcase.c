/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:26:11 by jmarchan          #+#    #+#             */
/*   Updated: 2022/01/29 10:36:22 by jmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
			str[a] += 'a' - 'A';
		a++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "qweiopasdfghjklzxcvbnm";
	char	str2[] = "QWTYUIOPASDFGHJKLZXCVBNM";
	char	str3[] = "qweRtYUiOPasdFghJKlzxcVbNm";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
}*/
