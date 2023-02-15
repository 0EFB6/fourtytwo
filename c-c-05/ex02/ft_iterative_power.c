/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:05:29 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/15 15:55:33 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb < 0 || power == 0)
		return (1);
	while (power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	printf("%d", ft_iterative_power(0, 0));
}
