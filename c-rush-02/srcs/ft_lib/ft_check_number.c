
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:44:30 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/25 21:53:58 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_check_number(char *num)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(num);
	if (size > 39)
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
