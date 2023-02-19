/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:08:09 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/19 13:08:10 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	**tab;
	int	size;
	
	tab = NULL;
	size = 4;
	if (argc != 2)
		return (error_1());
	if (!ft_check_arg(argv[1], size))
		return (error_2());
	tab = ft_init_table(argv[1], size);
	if (tab != NULL)
	{
		ft_solve(tab, 1, 1, size);
		if (tab[size][size] != 0)
			ft_print_table(tab, size);
		else
			return (error_3());
		ft_destroy_table(tab, size);
		return (0);
	}
	return (error());
}