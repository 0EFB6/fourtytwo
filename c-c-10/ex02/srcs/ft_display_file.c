/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:54:29 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/27 19:45:51 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <libgen.h>
#include "ft.h"

int ft_open(char *basen, int *f, char *filename)
{
	*f = open(filename, O_RDONLY);
	if (*f < 0)
	{
		ft_puterr(basename(basen), filename, strerror(errno), 0);
		return (0);
	}
	return (1);
}

int ft_file_len(char *basen, long long *len, char *filename)
{
	char buffer;
	int f;

	if (!ft_open(basen, &f, filename))
		return (0);
	*len = 0;
	while (read(f, &buffer, 1) > 0)
		(*len)++;
	close(f);
	return (1);
}

void ft_put_filename(char *filename, int p)
{
	if (p)
		ft_putchar('\n');
	ft_putstr("==> ");
	ft_putstr(filename);
	ft_putstr(" <==\n");
}

int ft_display_file(int argc, char *basen, char *filename, t_display_info info)
{
	char *buffer;
	char *tmp;
	long long len;
	int f;

	if (!ft_open(basen, &f, filename) || !ft_file_len(basen, &len, filename))
		return (0);
	buffer = malloc(len + 1);
	if (!buffer)
	{
		ft_puterr(basename(basen), "malloc", strerror(errno), 0);
		return (0);
	}
	tmp = buffer;
	while (read(f, buffer, 1) > 0)
		buffer++;
	*buffer = 0;
	if (info.len_input > len)
		info.len_input = len;
	if (argc > 4)
		ft_put_filename(filename, info.p);
	ft_putstr(buffer - info.len_input);
	close(f);
	free(tmp);
	return (1);
}
