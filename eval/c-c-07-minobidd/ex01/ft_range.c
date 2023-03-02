/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minobidd <minobidd@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:18:52 by minobidd          #+#    #+#             */
/*   Updated: 2023/03/02 12:35:01 by minobidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	*b;
	int	minvalue;
	int	maxvalue;

	minvalue = min;
	maxvalue = max;
	if (maxvalue <= minvalue)
	{
		return (0);
	}
	b = malloc(sizeof(int) * (maxvalue - minvalue));
	a = 0;
	while (maxvalue > minvalue)
	{
		b[a] = minvalue;
		a++;
		minvalue++;
	}
	return (b);
}
