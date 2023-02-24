/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:46:13 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/24 22:53:27 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

int ft_init(t_rush *rush, char *value, char *name)
{
	int name_size;
	int value_size;

	name_size = ft_strlen(name);
	value_size = ft_strlen(value);
	rush->name = (t_rush)malloc(name_size * sizeof(char));
	rush->value = (t_rush)malloc(value_size * sizeof(char));
	if (!rush->name)
		return(1);
	if (!rush->value)
		return (1);
	ft_strcpy(this->name, name);
	ft_strcpy(this->value, value);
	return (0);
}
