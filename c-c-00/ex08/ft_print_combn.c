/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:21:54 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/08 22:15:53 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print(int *tab, int n)
{
	int a;
	bool low;

	a = 1;
	low = 1;
	while (a < n)
	{
		if (tab[a - 1] >= tab[a])
		{
			low = 0;
		}
		a++;
	}
	if (low)
	{
		a = 0;
		while (a < n)
		{
			ft_putchar(tab[a++] + 48);
		}
		if (tab[0] < (10 - n))
		{
			write(1, &", ", 2);
		}
	}
}

void ft_print_combn(int n)
{
	int a;
	int tab[n];

	a = 0;
	while (a < n)
	{
		tab[a++] = 0;
	}
	while (tab[0] <= (10-n) && n >= 1 && n < 10)
	{
		print(tab, n);
		tab[n - 1]++;
		a = n - 1;
		while (a && n > 1)
		{
			if (tab[a] > 9)
			{
				tab[a - 1]++;
				tab[a] = 0;
			}
			a--;
		}
	}
}

int main(void)
{
	ft_print_combn(6);
}
