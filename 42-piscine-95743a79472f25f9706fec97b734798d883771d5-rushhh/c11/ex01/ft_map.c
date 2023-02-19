/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:39:04 by tnard             #+#    #+#             */
/*   Updated: 2021/07/22 16:49:29 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	n;
	int	*reb;

	n = 0;
	reb = malloc(sizeof(int) * length);
	if (!reb || length < 1)
		return (NULL);
	while (n < length)
	{
		reb[n] = (*f)(tab[n]);
		n++;
	}
	return (reb);
}
