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

#include <stdlib.h>

char **ft_init_table(char *str, int size)
{
	char **table;
	int x;
	int y;

	if (!(table = (char **)malloc(size * sizeof(char*))))
		return (NULL);
	y = 0;
	while (y < size)
	{
		if (!(table[y] = (char *)malloc((size + 4) * sizeof(char))))
			return (NULL);
		x = 0;
		while (x < size)
		{
			table[y][x] = 0;
			x++;
		}
		x = 0;
		while (x < 4)
		{
			table[y][size + x] = str[2 * (y + x * size)] - '0';
			x++;
		}
		y++;
	}
	return (table);
}
