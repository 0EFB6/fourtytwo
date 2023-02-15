/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:27:41 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/15 15:30:05 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

int main()
{
	printf("%d", ft_recursive_power(3, 3));
}
