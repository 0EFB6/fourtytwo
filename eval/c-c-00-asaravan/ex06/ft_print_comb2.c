/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 00:27:37 by asaravan          #+#    #+#             */
/*   Updated: 2023/02/15 15:36:00 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int ones, int tens, int hundreds, int thousands)
{
	ft_putchar(thousands + 48);
	ft_putchar(hundreds + 48);
	ft_putchar(' ');
	ft_putchar(tens + 48);
	ft_putchar(ones + 48);
	if (thousands != 9 || hundreds != 8 || tens != 9 || ones != 9)
		write(1, ", ", 2);
}

void	nospace(int ones, int tens, int hundreds, int thousands)
{
	while (hundreds <= 9)
	{
		while (tens <= 9)
		{
			while (ones <= 9)
			{
				print(ones, tens, hundreds, thousands);
				ones++;
			}
			tens++;
			ones = 0;
		}
		hundreds++;
		ones = (hundreds + 1) % 10;
		if (hundreds == 9)
			tens = thousands + 1;
		else
			tens = thousands;
	}
}

void	ft_print_comb2(void)
{
	int	ones;
	int	tens;
	int	hundreds;
	int	thousands;

	ones = 1;
	tens = 0;
	thousands = 0;
	while (thousands <= 9)
	{
		hundreds = 0;
		nospace(ones, tens, hundreds, thousands);
		thousands++;
		tens = thousands;
	}
}

int main()
{
	ft_print_comb2();
}
