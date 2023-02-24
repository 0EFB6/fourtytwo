/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:44:30 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/24 23:47:30 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int ft_check_number(char *num)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(num);
	if (size > 39)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (num[i])
	{
		if (nbr[i] < '0' || nbr [i] > '9')
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}
