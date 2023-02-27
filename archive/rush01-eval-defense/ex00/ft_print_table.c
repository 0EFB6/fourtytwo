/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:44:20 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/19 15:44:20 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print_table(int **tab, int size)
{
	int	y;
	int	x;

	y = 1;
	x = 1;
	while (y < size + 1)
	{
		while (x < size + 1)
		{
			ft_putnbr(tab[y][x]);
			x++;
			if (x < size + 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		x = 1;
		y++;
	}
}
