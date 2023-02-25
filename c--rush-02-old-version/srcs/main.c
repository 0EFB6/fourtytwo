/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:37:08 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/25 22:15:57 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include "rush.h"

int main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
	{
		ft_error();
		return (1);
	}
	else
		ft_run(argc, argv);
	return (0);
}
