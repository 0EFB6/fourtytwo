/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_digit_three.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:15:27 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/26 15:15:28 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "ft_lib.h"

void	ft_convert_modulo_one(int i, char *number, char *buffer)
{
	int		digit_number_one;
	char	*digit_number_one_char;

	digit_number_one = number[i] - 48;
	digit_number_one_char = ft_itoa(digit_number_one);
	ft_write_number(ft_strstr(buffer, digit_number_one_char), buffer);
}

void	ft_convert_modulo_two(int i, char *number, char *buffer)
{
	int		digit_number_two;
	char	*digit_number_two_char;

	digit_number_two = 10 * (number[i] - 48) + (number[i + 1] - 48);
	digit_number_two_char = ft_itoa(digit_number_two);
	ft_write_number_digit_two(digit_number_two_char, buffer);
}

void	ft_convert_modulo_zero(int i, char *number, char *buffer)
{
	int		digit_number_one;
	int		digit_number_two;
	char	*digit_number_one_char;
	char	*digit_number_two_char;

	digit_number_one = number[i] - 48;
	digit_number_two = 10 * (number[i + 1] - 48) + (number[i + 2] - 48);
	digit_number_one_char = ft_itoa(digit_number_one);
	digit_number_two_char = ft_itoa(digit_number_two);
	if (number[i] != '0')
	{
		ft_putchar(' ');
		ft_write_number(ft_strstr(buffer, digit_number_one_char), buffer);
		ft_putchar(' ');
		ft_write_number(ft_strstr(buffer, "100"), buffer);
	}
	if (number[i + 1] != '0' || number[i + 2] != '0')
	{
		ft_putchar(' ');
		ft_write_number_digit_two(digit_number_two_char, buffer);
	}
}
