/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhbin-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:28:29 by muhbin-m          #+#    #+#             */
/*   Updated: 2023/02/12 15:06:53 by cwei-she         ###   ########.fr       */
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
	int		q[10];
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

void	ft_putnbr(int nb)
{
	int		a;

	if (nb < 0)
	{
		ft_putchar('-');
		a = nb * -1;
		put(a);
	}
	if (nb > 0)
	{
		put(nb);
	}
	else
	{
		ft_putchar(nb);
	}
}

int main()
{
	ft_putnbr(3);
}
