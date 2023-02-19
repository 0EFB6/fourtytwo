/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_table.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:08:03 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/19 13:08:04 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_destroy_table(int **tab, int size)
{
	while (size)
	{
		free(tab[size]);
		size--;
	}
	free(tab);
}