/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:30:46 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/18 16:34:49 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_table(char **table, int size)
{
	int x;
	int y;

	y = 0; /* Row number */
	while (y < size)
	{
		x = 0; /* Column number */
		while (x < size)
		{
			ft_putchar(tab[y][x] + '0');
			if (x < size - 1)
			{
				ft_putchar(' ');
				x++;
			}
		}
		ft_putchar('\n');
		y++;
	}
}

