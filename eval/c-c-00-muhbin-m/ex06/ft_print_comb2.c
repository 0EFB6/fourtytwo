/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhbin-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:58:38 by muhbin-m          #+#    #+#             */
/*   Updated: 2023/02/12 15:04:44 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put(int n)
{
	int		i;
	int		q[2];
	int		m;

	i = 0;
	while (n > 0)
	{
		m = n % 10;
		q[i] = m;
		i ++;
		n = n / 10;
	}
	i -= 1;
	while (i >= 0)
	{
		ft_putchar(q[i] + '0');
		i--;
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			put(a);
			ft_putchar(' ');
			put(b);
			ft_putchar(',');
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
}
