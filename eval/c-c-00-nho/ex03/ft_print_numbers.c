/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nho <nho@42kl.edu.my>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:26:59 by nho               #+#    #+#             */
/*   Updated: 2023/02/16 14:45:05 by nho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	a;

	a = 48;
	while (a <= 57)
	{
		write (1, &a, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
