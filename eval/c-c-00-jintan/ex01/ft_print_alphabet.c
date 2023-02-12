/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:47:53 by jintan            #+#    #+#             */
/*   Updated: 2023/02/09 09:38:25 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}
