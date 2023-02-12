/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myin-hao <myin-hao@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:26:42 by myin-hao          #+#    #+#             */
/*   Updated: 2023/02/11 23:18:53 by myin-hao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int z)
{
	int	a;
	int	b;

	a = z / 10;
	b = z % 10;
	ft_putchar(a + 48);
	ft_putchar(b + 48);
}

void	ft_print_comb2(void)
{	
	int	x[2];

	x[0] = 0;
	x[1] = 0;
	while (x[0] <= 98)
	{
		x[1] = x[0] + 1;
		while (x[1] <= 99)
		{
			ft_print(x[0]);
			ft_putchar(' ');
			ft_print(x[1]);
			if (x[0] == 98)
			{
				return ;
			}
			ft_putchar(',');
			ft_putchar(' ');
			x[1]++;
		}
	x[0]++;
	}
}
