/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:34:42 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/16 15:49:37 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

int main()
{
	int lol = 8;
	int *ra = &lol;
	int **range = &ra;
	printf("%d", ft_ultimate_range(range, 6, 9));
}
