/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:10:06 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/25 22:12:16 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_lib.h"

char *ft_open_read_one_arg(void)
{
	int f;
	int r;
	char *buffer;
	
	buffer = (char *)malloc(2048 * sizeof(char));
	if (!buffer)
		return (0);
	f = open("number.dict", O_RDONLY);
	r = read(f, buffer, 2048);
	if (r == -1)
		ft_putstr("Error\n");
	else
		close(f);
	return (buffer);
}

char *ft_open_read_two_arg(char *file_name)
{
	int f;
	int r;
	char *buffer;

	buffer = (char *)malloc(2048 * sizeof(char));
	if (!buffer)
		return (0);
	f = open(file_name, O_RDONLY);
	r = read(f, buffer, 2048);
	if (r == -1)
		ft_putstr("Error\n");
	else
		close(f);
	return (buffer);
}
