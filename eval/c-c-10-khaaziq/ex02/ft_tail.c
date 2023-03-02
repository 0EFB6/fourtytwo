/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaaziq <khaaziq@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:12:17 by khaaziq           #+#    #+#             */
/*   Updated: 2023/02/28 17:12:23 by khaaziq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "utils.h"

int	ft_seek(int offset, char *file_name, int *buffer)
{
	int	total_bytes;
	int	read_size;
	int	fd;

	fd = open(file_name, O_RDONLY);
	total_bytes = 0;
	read_size = read(fd, buffer, 512);
	if (fd < 0 || read_size < 0)
	{
		write(2, "Cannot read file.\n", 18);
		if (fd)
			close(fd);
		return (1);
	}
	while (read_size > 0)
	{
		total_bytes += read_size;
		read_size = read(fd, buffer, 512);
	}
	total_bytes += read_size;
	offset = total_bytes - offset;
	close(fd);
	return (offset);
}

void	skip_bytes(int offset, int fd, int *buffer)
{
	int	read_size;

	read_size = 0;
	while (offset > 0)
	{
		if (offset >= 512)
		{
			read_size = read(fd, buffer, 512);
			offset -= 512;
		}
		else
		{
			read_size = read(fd, buffer, offset);
			offset = 0;
		}
	}
}

void	print_tail(int fd, int *buffer)
{
	int	read_size;

	read_size = read(fd, buffer, 512);
	while (read_size > 0)
	{
		write(1, buffer, read_size);
		read_size = read(fd, buffer, 512);
	}
}

int	main(int ac, char **av)
{
	int	fd;
	int	read_size;
	int	*buffer;
	int	offset;

	read_size = 0;
	buffer = malloc(ft_atoi(av[2]) + 1);
	if (handle_error(ac, read_size, buffer, av))
		return (1);
	buffer = malloc(ft_atoi(av[2]));
	offset = ft_seek(ft_atoi(av[2]), av[3], buffer);
	fd = open(av[3], O_RDONLY);
	skip_bytes(offset, fd, buffer);
	print_tail(fd, buffer);
	close(fd);
	return (0);
}
