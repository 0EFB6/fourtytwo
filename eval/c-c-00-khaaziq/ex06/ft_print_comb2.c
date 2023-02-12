/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaaziq <khaaziq@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:32:39 by khaaziq           #+#    #+#             */
/*   Updated: 2023/02/10 12:50:03 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_putcomb2(int n1, int n2)
{
	if (n1 < 10)
		ft_putchar('0');
	ft_putnbr(n1);
	ft_putchar(' ');
	if (n2 < 10)
		ft_putchar('0');
	ft_putnbr(n2);
	if (!(n1 == 98 && n2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = 0;
		while (number2 <= 99)
		{
			if (number1 < number2)
			{
				ft_putcomb2(number1, number2);
			}
			number2++;
		}
		number1++;
	}
}

int main(void)
{
	ft_print_comb2();
}
