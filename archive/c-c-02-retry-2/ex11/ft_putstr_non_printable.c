/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:08:40 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/12 15:23:21 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, hex + c / 16, 1);
	write(1, hex + c % 16, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
			ft_puthex(*str);
		str++;
	}
}
