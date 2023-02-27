/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:37:13 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/19 16:03:08 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

int	ft_init_line(int **tab, int size, char *argv)
{
	int	y;
	int	x;
	int	n;

	y = 0;
	x = 1;
	n = 1;
	while (x <= size)
	{
		tab[y][x] = ft_get_arg(argv, n);
		x++;
		n++;
	}
	x = 1;
	y = 5;
	while (x <= size)
	{
		tab[y][x] = ft_get_arg(argv, n);
		x++;
		n++;
	}
	return (1);
}

int	ft_init_column(int **tab, int size, char *argv)
{
	int	y;
	int	x;
	int	n;

	y = 1;
	x = 0;
	n = size * 2 + 1;
	while (y <= size)
	{
		tab[y][x] = ft_get_arg(argv, n);
		y++;
		n++;
	}
	y = 1;
	x = 5;
	while (y <= size)
	{
		tab[y][x] = ft_get_arg(argv, n);
		y++;
		n++;
	}
	return (1);
}

int	ft_init_fill(int **tab, int size)
{
	int	y;
	int	x;

	y = 1;
	while (y <= size)
	{
		x = 1;
		while (x <= size)
		{
			tab[y][x] = 0;
			x++;
		}
		y++;
	}
	return (1);
}

int	**ft_init_table(char *argv, int size)
{
	int	a;
	int	**tab;

	a = 0;
	tab = (int **)malloc((size + 2) * sizeof(int *));
	while (a < size + 2)
	{
		tab[a] = (int *)malloc((size + 2) * sizeof(int *));
		a++;
	}
	if (ft_init_line(tab, size, argv)
		&& ft_init_column(tab, size, argv)
		&& ft_init_fill(tab, size))
		return (tab);
	return (NULL);
}
