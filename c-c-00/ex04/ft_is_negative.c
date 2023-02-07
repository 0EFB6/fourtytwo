/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:47:51 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/07 22:52:16 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ng='N';
	char	p='P';

	if (n<0)
	{
		write(1, &ng, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

int		main()
{
	ft_is_negative(-5);
}
