/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parselen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:38:48 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/24 22:39:59 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int ft_parselen(t_rush **parse)
{
	int i;

	i = 0;
	while (parse[i])
		i++;
	return (i);
}
