/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjezukai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:51:27 by mjezukai          #+#    #+#             */
/*   Updated: 2022/02/01 16:38:18 by mjezukai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnumber(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_putnbr(int n)
{
	if (n <= -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
		return ;
	}
	if (n < 10)
	{
		ft_putnumber(n);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnumber(n % 10);
	}
}
/*
int main()
{
	ft_putnbr(2147483648);
	write(1, "\n", 1);
	ft_putnbr(1234351);
	write(1, "\n", 1);
	ft_putnbr(-1432452);
}*/
