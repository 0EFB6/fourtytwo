/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:22:43 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/14 23:41:59 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_valid_base(char *base)
{
	char	*ptr;

	if (ft_strlen(base) < 2)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		ptr = base + 1;
		while (*ptr)
		{
			if (*base == *ptr)
				return (0);
			ptr++;
		}
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	div;
	int	mod;
	int	len;

	if(!ft_valid_base(base))
		return ;
	len = ft_strlen(base);
	div = nbr / len;
	mod = nbr % len;
	if (nbr < 0)
	{
		write(1, "-", 1);
		div = -div;
		mod = -mod;
	}
	if (div > 0)
		ft_putnbr_base(div, base);
	write(1, base + mod, 1);
}
