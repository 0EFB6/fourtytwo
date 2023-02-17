/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:20:55 by melee             #+#    #+#             */
/*   Updated: 2023/02/17 07:55:43 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base, char *check)
{
	int	i;

	i = 0;
	while (base[i] && check[i] && base[i] == check[i])
	{
		i++;
	}
	return (!(base[i] - check[i]));
}

void	print(int nbr, char *base, int size)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= size)
	{
		print(nbr / size, base, size);
		print(nbr % size, base, size);
	}
	else
		ft_putchar(base[nbr % size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base, "0123456789"))
		print(nbr, base, 10);
	else if (check_base(base, "01"))
		print(nbr, base, 2);
	else if (check_base(base, "0123456789ABCDEF"))
		print(nbr, base, 16);
	else if (check_base(base, "poneyvif"))
		print(nbr, base, 8);
}
/*
int	main(void)
{
	int	nbr;

	nbr = 42;
	ft_putnbr_base(nbr, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(nbr, "01");
	ft_putchar('\n');
	ft_putnbr_base(nbr, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(nbr, "poneyvif");
}
*/
