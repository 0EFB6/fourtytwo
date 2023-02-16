/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:25:25 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/16 15:33:40 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *p;
	int i;

	i = 0;
	if (max <= min)
		return (0);
	p = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}

int main(void)
{
	printf("%p", ft_range(3,7));
}
