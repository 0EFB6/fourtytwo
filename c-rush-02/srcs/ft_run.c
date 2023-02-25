/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:04:56 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/25 22:18:26 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_lib.h"
#include "rush.h"

int ft_run(int argc, char **argv)
{
	char *buffer;

	if (argc == 2)
	{
		char *file_name = "numbers.dict";
		if (ft_check_number(argv[1]) == 0)
			return (0);
		buffer = ft_open_read(file_name);
		ft_convert(argv[1], buffer);
		free(buffer);
	}
	else if (argc == 3)
	{
		if (ft_check_number(argv[2]) == 0)
			return (0);
		buffer = ft_open_read(argv[1]);
		ft_convert(argv[2], buffer);
		free(buffer);
	}
	return (0);
}
