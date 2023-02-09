/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable_main.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:08:40 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/09 21:30:34 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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

int main(void)
{
	char str[] = "Coco\nut vas bien\t ?";
	ft_putstr_non_printable(str);
}
