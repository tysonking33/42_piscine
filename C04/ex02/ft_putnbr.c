/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:35:06 by tytang            #+#    #+#             */
/*   Updated: 2022/01/31 14:15:04 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar (nb + '0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr (nb * -1);
	}
	else
	{
		ft_putnbr ((nb / 10));
		ft_putchar ((nb % 10) + '0');
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-696969);
	ft_putchar('\n');
	ft_putnbr(696969);
	ft_putchar('\n');
	return (0);
}
*/
