/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkee <wkee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:57:08 by wkee              #+#    #+#             */
/*   Updated: 2023/02/12 16:49:59 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_col(int x, char start, char mid, char end)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
		{
			ft_putchar(start);
		}
		else if (j < x)
		{
			ft_putchar(mid);
		}
		else if (j == x)
		{
			ft_putchar(end);
		}
		j++;
	}
	if (x > 0)
	{
		ft_putchar(10);
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			ft_col(x, '/', '*', 92);
		}
		else if (i < y)
		{
			ft_col(x, '*', ' ', '*');
		}
		else if (i == y)
		{
			ft_col(x, 92, '*', '/');
		}
		i++;
	}
}
