/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: booi <booi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:13:14 by booi              #+#    #+#             */
/*   Updated: 2023/02/24 10:17:05 by booi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	make_int(int n, char *str)
{
	int	i;
	int	p;

	i = n;
	p = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		p = 10 * p + str[i] - '0';
		i++;
	}
	return (p);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			neg++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (neg % 2 == 1)
				return (-make_int(i, str));
			return (make_int(i, str));
		}
		i++;
	}
	return (0);
}
