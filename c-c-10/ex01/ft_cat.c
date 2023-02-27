/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:47:35 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/27 11:58:31 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_puterr(char *cmd, char *op, char *err)
{
	ft_putstr(cmd);
	ft_putstr(": ");
	ft_putstr(op);
	ft_putstr(": ");
	ft_putstr(err);
	ft_putchar('\n');
	return ;
}


void	ft_display_file(char *cmd, char *filename)
{
	char	buf;
	int		f;

	f = open(filename, 0);
	if (f < 0)
	{
		ft_puterr(cmd, filename, strerror(errno));
		return ;
	}
	buf = 0;
	while (read(f, &buf, 1) > 0)
	{
		ft_putchar(buf);
	}
	close(f);
}


int main(int argc, char **argv)
{
	int i;
	char buffer;

	if (argc == 1)
	{
		buffer =  0;
		while(read(0, &buffer, 1) > 0)
			ft_putchar(buffer);
		return (0);
	}
	i = 1;
	while (i < argc)
		ft_display_file(basename(argv[0]), argv[i++]);
	return (0);
}
