/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:41:14 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/15 15:43:20 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while(i * i < nb && i * i >= 0)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

int main(void)
{
	printf("%d", ft_sqrt(15));
}