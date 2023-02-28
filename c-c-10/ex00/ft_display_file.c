/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:20:03 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/28 18:27:24 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *file)
{
	int	r;
	int	f;
	char	c;

	f = open(file, O_RDONLY);
	if (f == -1)
		return (0);
	while((r = read(f, &c, 1)) != 0)
	{
		if (r == -1)
			return (0);
		write(1, &c, 1);
	}
	close(f);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		if (!ft_display_file(argv[1]))
			write(2, "Cannot read file.\n", 18);
	}
	return (0);
}
