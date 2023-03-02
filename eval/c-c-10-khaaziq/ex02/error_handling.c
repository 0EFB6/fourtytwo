/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaaziq <khaaziq@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:29:51 by khaaziq           #+#    #+#             */
/*   Updated: 2023/02/28 15:29:52 by khaaziq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	print_input(int read_size, int *buffer)
{
	read_size = read(0, buffer, 512);
	while (read_size > 0)
		read_size = read(0, buffer, 512);
	return (0);
}

int	handle_error(int ac, int read_size, int *buffer, char **av)
{
	if (ac > 5)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (ac < 2 && print_input(read_size, buffer))
		return (1);
	if (av[1][0] != '-' || av[1][1] != 'c' || av[2] < 0)
		return (1);
	return (0);
}
