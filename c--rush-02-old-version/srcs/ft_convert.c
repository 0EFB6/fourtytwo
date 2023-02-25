/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:39:31 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/25 22:39:32 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "ft_lib.h"

void    ft_write_number(char *number, char *buffer)
{
    int i;
    char *str;

    i = 0;
    str = ft_strstr(buffer, number);
    while (str[i] && str[i] != '\n')
    {
        while (str[i] != ':')
            i++;
        if (str[i] == ':')
            i++;
        while (str[i] == ' ')
            i++;
        while (str[i] >= 32 && str[i] <= 126)
        {
            ft_putchar(str[i]);
            i++;
        }
    }
}

void    ft_write_number_digit_two(char *number, char *buffer)
{
    int number_len;
    int digit_number_one;
    int digit_number_two;
    char *digit_number_one_char;
    char *digit_number_two_char;

    number_len = ft_strlen(number);
    if ((number_len == 2 && number[0] != '1' && number[1] != '0'))
    {
        digit_number_one = 10 * (number[0] - 48);
        digit_number_two = number[1] - 48;
        digit_number_one_char = ft_itoa(digit_number_one);
        digit_number_two_char = ft_itoa(digit_number_two);
        ft_write_number(ft_strstr(buffer, digit_number_one_char), buffer);
        ft_putchar('-');
        ft_write_number(ft_strstr(buffer, digit_number_two_char), buffer);
    }
    else
        ft_write_number(ft_strstr(buffer, number), buffer);  
}

void ft_write_zeros(int size, char *buffer)
{
	int power_size;
	char *power_size_char;

	if (size >= 3)
	{
		power_size = ft_iterative_power(1000, size / 3);
		power_size_char = ft_itoa(power_size);
		ft_putchar(' ');
		ft_write_number(ft_strstr(buffer, power_size_char), buffer);
	}
}

void    ft_convert(char *number, char *buffer)
{
    int i;
    int number_len;
    int digit_number_one;
    int digit_number_two;
    char *digit_number_one_char;
    char *digit_number_two_char;

    i = 0;
    number_len = ft_strlen(number);
    while (number_len > 0)
    {
        if (number_len > 1 && number[0] == '0')
        {
            char str[] = "Debug Format Number Not Allowed";
            ft_putstr(str);
            break;
        }
        if (number_len % 3 == 1)
        {
            digit_number_one = number[i] - 48;
            digit_number_one_char = ft_itoa(digit_number_one);
            ft_write_number(ft_strstr(buffer, digit_number_one_char), buffer);
            i++;
            number_len--;
            ft_write_zeros(number_len, buffer);
        }
        else if (number_len % 3 == 2)
        {
            digit_number_two = 10 * (number[i] - 48) + (number[i + 1] - 48);
            digit_number_two_char = ft_itoa(digit_number_two);
            ft_write_number_digit_two(digit_number_two_char, buffer);
            i += 2;
            number_len -= 2;
            ft_write_zeros(number_len, buffer);
        }
        else if (number_len % 3 == 0)
        {
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
            number_len -= 3;
            if ((number_len >= 3) && (number[i] != '0' || number[i + 1] != '0' || number[i + 2] != '0'))
                ft_write_zeros(number_len, buffer);
            i -= 3;
        }
    }
}