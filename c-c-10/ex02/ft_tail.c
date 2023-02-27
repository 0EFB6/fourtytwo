/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:39:54 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/27 19:49:27 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include "ft.h"

int	ft_puthelp(char *basen)
{
	ft_puterr(basename(basen), 0, "option requires an argument", "c");
	ft_puterr("usage", 0, "ft_tail [-c #] [file ...]", 0);
	return (1); 
}

int main(int argc, char **argv)
{
	t_display_info info;
	int i;

	if (argc < 3)
		return (ft_puthelp(argv[0]));
	info.len_input = ft_getnum(argv[2]);
	if (info.len_input < 0)
		return (ft_puterr(basename(argv[0]), 0, "illegal offset", argv[2]));
	if (argc == 3)
		return (ft_tail_input(argv[0], info.len_input));
	i = 3;
	info.p = 0;
	while (i < argc)
	{
		if (ft_display_file(argc, argv[0], argv[i], info))
			info.p = 1;
		i++;
	}
	return (0);
}
