/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:23:08 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/15 14:49:25 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

int main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
