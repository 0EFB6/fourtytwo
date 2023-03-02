/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaaziq <khaaziq@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:12:17 by khaaziq           #+#    #+#             */
/*   Updated: 2023/02/28 18:23:03 by khaaziq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
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

void print_char_hex(char c) {
    char hex_digits[] = "0123456789abcdef";
    char hex[3];
	if (c >= 32 && c <= 126)
	{
    	hex[0] = hex_digits[c / 16];
    	hex[1] = hex_digits[c % 16];
    	hex[2] = '\0';
    	write(1, hex, 2);
	}
	else
		write(1, "0a", 2);
}

int	main(int ac, char **av)
{
	int	fd;
	int	read_size;
	char	*buffer;
	int	i;
	char	c;

	buffer = malloc(17);
	buffer[16] = '\0';
	if (handle_error(ac))
		return (1);
	fd = open(av[1], O_RDONLY);
	read_size = read(fd, buffer, 16);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		if (fd)
			close(fd);
		return (1);
	}
	while (read_size > 0)
	{
		i = 0;
		write(1, "0000000\t", 8);
		while (i < read_size)
		{
			c = buffer[i];
			print_char_hex(c);
			write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		read_size = read(fd, buffer, 16);
	}
	close(fd);
	return (0);
}
