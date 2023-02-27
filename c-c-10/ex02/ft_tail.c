/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:39:54 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/27 13:47:30 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void	ft_putchar(char c)
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

void	ft_puterr(char *basen, char *filename, char *err)
{
	ft_putstr(basen);
	ft_putstr(": ");
	ft_putstr(filename);
	ft_putstr(": ");
	ft_putstr(err);
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
}
