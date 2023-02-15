/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazuddin <aazuddin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:21:23 by aazuddin          #+#    #+#             */
/*   Updated: 2023/02/09 14:19:40 by aazuddin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 122;
	while (alphabet <= 122 && alphabet >= 97)
	{
		write (1, &alphabet, 1);
		alphabet--;
	}
}
/*
int	main(void)
{
    ft_print_reverse_alphabet();
	return (0);
}
*/
