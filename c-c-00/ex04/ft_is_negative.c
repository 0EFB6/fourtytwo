/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:47:51 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/08 16:31:33 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	nve;
	char	pve;

	nve = 'N';
	pve = 'P';
	if (n < 0)
	{
		write(1, &nve, 1);
	}
	else
	{
		write(1, &pve, 1);
	}
}

int	main(void)
{
	ft_is_negative(123);
}
