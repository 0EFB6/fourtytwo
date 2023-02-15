/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:41:45 by asaravan          #+#    #+#             */
/*   Updated: 2023/02/09 13:11:10 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char j)
{
	write(1, &j, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		ft_putchar(i);
		i++;
	}
}
