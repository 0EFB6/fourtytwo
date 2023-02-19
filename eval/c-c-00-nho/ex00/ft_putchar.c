/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nho <nho@42kl.edu.my>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:24:29 by nho               #+#    #+#             */
/*   Updated: 2023/02/16 14:00:00 by nho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>	/*include the header file*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int	main(void)
{
	char	c;

	c = 'C';
	ft_putchar(c);
	return (0);
}
*/