/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:17:15 by eclark            #+#    #+#             */
/*   Updated: 2022/01/31 17:13:49 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < (nb / i))
	{
		i++;
		if (i == (nb / i) && (nb % i) == 0)
		{
			return (i);
		}
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_sqrt(64));
	printf("%d\n", ft_sqrt(-64));
	printf("%d\n", ft_sqrt(144));
}
