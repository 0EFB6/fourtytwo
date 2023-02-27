/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:52:30 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/27 20:00:24 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_puterr(char *basen, char *filename, char *err, char *info)
{
	ft_putstr(basen);
	ft_putstr(": ");
	if (filename)
	{
		ft_putstr(filename);
		ft_putstr(": ");
	}
	ft_putstr(err);
	if (info)
	{
		ft_putstr(" -- ");
		ft_putstr(info);
	}
	ft_putchar('\n');
	return (1);
}
