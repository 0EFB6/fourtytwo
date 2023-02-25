/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:11:39 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/24 22:16:08 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

t_rush *ft_search_by_id_parse(t_rush **parse, char *id)
{
	int i;

	i = 0;
	while (parse[i])
	{
		if (!ft_strcmp(id, parse[i]->value))
			return (parse[i]);
		i++;
	}
	return (NULL);
}

t_rush *ft_search_by_id(t_rush **pairs, char *id, int size)
{
	int i;

	i =0;
	while (i < size - 1)
	{
		if (!ft_strcmp(id, parse[i]->value))
			return (pairs[i]);
		i++;
	}
	return (NULL);
}
