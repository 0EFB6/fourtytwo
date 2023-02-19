/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 17:34:52 by tnard             #+#    #+#             */
/*   Updated: 2021/07/22 09:28:54 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_show(int **tab, int size)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (a < size + 1)
	{
		while (b < size + 1)
		{
			ft_putnbr(tab[a][b++]);
			if (b < size + 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		b = 1;
		a++;
	}
	return ;
}
