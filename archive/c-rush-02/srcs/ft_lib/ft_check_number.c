/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:24:32 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/26 14:24:34 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_check_number(char *num)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(num);
	if (size > 14)
	{
		ft_error();
		return (0);
	}
	while (num[i])
	{
		if (num[i] < '0' || num [i] > '9')
		{
			ft_error();
			return (0);
		}
		i++;
	}
	return (1);
}
