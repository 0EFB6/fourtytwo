/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minobidd <minobidd@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:44:25 by minobidd          #+#    #+#             */
/*   Updated: 2023/03/02 12:36:35 by minobidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	length;
	int	minvalue;
	int	maxvalue;

	minvalue = min;
	maxvalue = max;
	length = maxvalue - minvalue;
	if (maxvalue <= minvalue)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * length);
	a = 0;
	while (maxvalue > minvalue)
	{
		range[0][a] = minvalue;
		a++;
		minvalue++;
	}
	return (length);
}
