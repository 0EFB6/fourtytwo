/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:22:06 by asaravan          #+#    #+#             */
/*   Updated: 2023/02/15 15:35:20 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	condition(int i, int j, int k)
{
	if (i < j && j < k)
	{
		ft_putchar(i + 48);
		ft_putchar(j + 48);
		ft_putchar(k + 48);
		if (i != 7 && i != 8 && i != 9)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{		
			while (k <= 9)
			{
				condition(i, j, k);
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

int main()
{
	ft_print_comb();
}
