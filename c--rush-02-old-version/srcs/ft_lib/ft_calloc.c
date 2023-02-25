/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:23:13 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/25 21:48:37 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	size_t total_size;
	void *ptr;
	char *p;


	i = 0;
	total_size = nmemb * size;
	ptr = malloc(total_size);
	p = ptr;
	if (!ptr)
		return (NULL);
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
