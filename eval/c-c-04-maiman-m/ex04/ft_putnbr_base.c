/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:04:02 by maiman-m          #+#    #+#             */
/*   Updated: 2023/02/24 10:39:52 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0' || s[i] == 32)
		i++;
	return (i);
}

int	validate_base(char *s)
{
	int	i;

	i = 0;
	if (ft_strlen(s) == 0 || ft_strlen(s) == 1)
		return (1);
	while (s[i] != '\0')
	{
		if (s[i] == s[i + 1] || s[i] == 43 || s[i] == 45)
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	q;

	q = nbr;
	if (!validate_base(base))
	{
		if (q < 0)
		{
			q *= -1;
			ft_putchar('-');
		}
		if (q == -2147483648)
		{
			ft_putchar(base[2]);
			q = 147483648;
		}
		if (q < ft_strlen(base))
			ft_putchar(base[q]);
		else
		{
			ft_putnbr_base(q / ft_strlen(base), base);
			ft_putnbr_base(q % ft_strlen(base), base);
		}
	}
}
