/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:58:05 by jintan            #+#    #+#             */
/*   Updated: 2023/02/09 17:27:03 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
