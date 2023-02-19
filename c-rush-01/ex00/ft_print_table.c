/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:03:10 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/19 13:03:11 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print_table(int **tab, int size)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (a < size + 1)
	{
		while (b < size + 1)
		{
			ft_putnbr(tab[a][b]);
			b++;
			if (b < size + 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		b = 1;
		a++;
	}
}