/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:44:30 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/19 15:44:31 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_check_view_colum_total(int **tab, int x, int y, int size)
{
	int	n;
	int	view;
	int	tmp;

	n = 1;
	view = 1;
	tmp = tab[1][x];
	if (y != size)
		return (1);
	while (n <= size)
	{
		if (tmp < tab[n++][x])
		{
			tmp = tab[n - 1][x];
			view++;
		}
	}
	if (view == tab[0][x])
		return (1);
	return (0);
}

int	ft_check_view_line_total(int **tab, int x, int y, int size)
{
	int	n;
	int	view;
	int	tmp;

	n = 1;
	view = 1;
	tmp = tab[y][1];
	if (x != size)
		return (1);
	while (n <= size)
	{
		if (tmp < tab[y][n++])
		{
			tmp = tab[y][n - 1];
			view++;
		}
	}
	if (view == tab[y][0])
		return (1);
	return (0);
}

int	ft_check_total(int **tab, int x, int y, int size)
{
	if (ft_check_view_line_total(tab, x, y, size)
		&& ft_check_view_colum_total(tab, x, y, size)
		&& ft_check_table(tab, size, x, y))
		return (1);
	return (0);
}

int	ft_solve(int **tab, int x, int y, int size)
{
	int	n;

	n = 0;
	while (++n <= size)
	{
		tab[y][x] = n;
		if (ft_check_total(tab, x, y, size))
		{
			if (x == size && y == size)
				return (1);
			else if (x < size)
			{
				if (ft_solve(tab, x + 1, y, size))
					return (1);
			}
			else if (y < size)
			{
				if (ft_solve(tab, 1, y + 1, size))
					return (1);
			}
			tab[y][x] = 0;
		}
	}
	tab[y][x] = 0;
	return (0);
}
