/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:23:24 by mcheng            #+#    #+#             */
/*   Updated: 2023/02/08 17:23:27 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb(int a, int b)
{
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
	write(1, " ", 1);
	ft_putchar((b / 10) + '0');
	ft_putchar((b % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_comb(a, b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
