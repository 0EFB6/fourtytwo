/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:22:40 by jintan            #+#    #+#             */
/*   Updated: 2023/02/09 14:55:13 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / 10);
		ft_putchar('8');
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else
	{
		if (nbr > 9)
		{
			ft_putnbr(nbr / 10);
		}
		ft_putchar(48 + nbr % 10);
	}
}
