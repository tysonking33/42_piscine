/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:39:30 by adunne            #+#    #+#             */
/*   Updated: 2022/01/13 16:29:01 by adunne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	answer;

	answer = 'P';
	if (n > 0)
	{
		write(1, &answer, 1);
	}
	else
	{
		answer = 'N';
		write(1, &answer, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(69);
}
*/

