/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:26:29 by maiman-m          #+#    #+#             */
/*   Updated: 2023/02/11 10:08:04 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	calc(int i, int j)
{
	ft_putchar((i / 10) + '0');
	ft_putchar((i % 10) + '0');
	write(1, " ", 1);
	ft_putchar((j / 10) + '0');
	ft_putchar((j % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	x;
	int	i;

	i = 0;
	while (i < 99)
	{
		x = i + 1;
		while (x <= 99)
		{
			calc(i, x);
			if ((i != 98) || (x != 99))
			{
				write(1, ", ", 2);
			}
			x++;
		}
		i++;
	}
}
