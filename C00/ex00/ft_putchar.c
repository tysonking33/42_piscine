/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:15:06 by tytang            #+#    #+#             */
/*   Updated: 2022/01/13 11:29:41 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
//unistd.h library for the write() function

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int main (void)
{
	ft_putchar('c');
	ft_putchar('\n');
	return 0;
}
*/
