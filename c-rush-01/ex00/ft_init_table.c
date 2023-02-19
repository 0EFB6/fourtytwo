/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:37:13 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/18 16:47:20 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_init_line(int **tab, int size, char *argv)
{
	int	a;
	int	b;
	int	n;

	a = 0;
	b = 1;
	n = 1;
	while (b <= size)
	{
		tab[a][b] = ft_getarg(argv, n);
		b++;
		n++;
	}
	b = 1;
	a = 5;
	while (b <= size)
	{
		tab[a][b] = ft_getarg(argv, n);
		b++;
		n++;
	}
	return (1);
}

int	ft_init_column(int **tab, int size, char *argv)
{
	int	a;
	int	b;
	int	n;

	a = 1;
	b = 0;
	n = size * 2 + 1;
	while (a <= size)
	{
		tab[a][b] = ft_getarg(argv, n);
		a++;
		n++;
	}
	a = 1;
	b = 5;
	while (a <= size)
	{
		tab[a][b] = ft_getarg(argv, n);
		a++;
		n++;
	}
	return (1);
}

int	ft_init_fill(int **tab, int size)
{
	int	a;
	int	b;

	a = 1;
	while (a <= size)
	{
		b = 1;
		while (b <= size)
		{
			tab[a][b] = 0;
			b++;
		}
		a++;
	}
	return (1);
}

int	**ft_init(char *argv, int size)
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