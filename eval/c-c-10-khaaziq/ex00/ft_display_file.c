/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaaziq <khaaziq@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:32:28 by khaaziq           #+#    #+#             */
/*   Updated: 2023/02/28 16:52:32 by khaaziq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	handle_error(int ac)
{
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	fd;
	int	read_size;
	int	buffer[30720];

	if (handle_error(ac))
		return (1);
	fd = open(av[1], O_RDONLY);
	read_size = read(fd, buffer, 30720);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		if (fd)
			close(fd);
		return (1);
	}
	while (read_size > 0)
	{
		write(1, buffer, read_size);
		read_size = read(fd, buffer, 30720);
	}
	close(fd);
	return (0);
}
