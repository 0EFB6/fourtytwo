/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaaziq <khaaziq@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:21:17 by khaaziq           #+#    #+#             */
/*   Updated: 2023/02/09 15:44:15 by khaaziq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}
