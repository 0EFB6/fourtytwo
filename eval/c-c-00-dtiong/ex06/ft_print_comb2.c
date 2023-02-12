/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiong <dtiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:47:01 by dtiong            #+#    #+#             */
/*   Updated: 2023/02/12 15:37:32 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char n)
{
	write(1, &n, 1);
}

void	printnum(int x)
{
	int	a;
	int	b;

	if (x < 10)
	{
		putchar('0');
		putchar(x + '0');
	}
	else
	{
		a = x / 10;
		putchar(a + '0');
		b = x % 10;
		putchar(b + '0');
	}
}

void	ft_print_comb2(void)

{
	int	x[2];

	x[0] = 00;
	x[1] = 01;
	while (x[0] <= 98)
	{
		while (x[1] <= 99)
		{
			printnum(x[0]);
			putchar(' ');
			printnum(x[1]);
			if (x[0] == 98)
			{
				return ;
			}
			putchar(',');
			putchar(' ');
			x[1]++;
		}
		x[0]++;
		x[1] = x[0] + 1;
	}	
}

int main()
{
	ft_print_comb2();
}
