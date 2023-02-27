/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:32:52 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/27 18:49:28 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include "ft.h"

void ft_puttail(char *str)
{
	if (!*str)
		return ;
	if (*str == '\n')
	{
		ft_putstr("^D\n");
		str++;
	}
	else if (*(str + 1) == '\n')
	{
		ft_putchar(*str);
		ft_putchar('D');
		str++;
	}
	ft_putstr(str);
}

int ft_tail_input(char *basen, long long len_input)
{
	char *buffer;
	char *tmp;
	long long i;

	buffer = malloc(len_input + 1);
	if (!buffer)
	{
		ft_puterr(basename(basen), "malloc", strerror(errno), 0);
		return(1);
	}
	tmp = buffer;
	i = 0;
	while (read(0, buffer, 1) > 0)
	{
		buffer++;
		if (i < len_input)
			i++;
	}
	*buffer = 0;
	ft_puttail(buffer - i);
	free(tmp);
	return (0);
}
