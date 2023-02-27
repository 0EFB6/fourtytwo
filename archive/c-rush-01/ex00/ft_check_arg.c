/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:42:55 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/19 16:26:12 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_check_count(int count, int size, int number)
{
	if (count == size * 4 && number <= size && number >= 1)
		return (1);
	return (0);
}

int	ft_check_arg(char *str, int size)
{
	int	n;
	int	count;
	int	number;

	n = 0;
	count = 0;
	number = 0;
	if (ft_is_num(str[n]))
	{
		while (str[n])
		{
			if (!ft_is_num(str[n]))
				n++;
			if (!ft_is_num(str[n]) || size < number || number < 0)
				return (0);
			number = 0;
			while (ft_is_num(str[n]))
			{
				number = str[n] - '0';
				if (!ft_is_num(str[++n]))
					count++;
			}
		}
	}
	return (ft_check_count(count, size, number));
}
