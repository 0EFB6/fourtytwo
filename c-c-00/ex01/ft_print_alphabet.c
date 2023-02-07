/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:32:08 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/07 22:38:21 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c = 'a';

	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

int	main()
{
	ft_print_alphabet();
}
