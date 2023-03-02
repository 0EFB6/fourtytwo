/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shechong <shechong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:08:05 by shechong          #+#    #+#             */
/*   Updated: 2023/03/02 13:49:06 by shechong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check(int value)
	{
	if (value != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	c1;
	int	c2;
	int	c3;

	c1 = 0;
	c2 = 0;
	c3 = 0;
	while (c1 <= 7)
	{
		c2 = c1 + 1;
		while (c2 <= 8)
		{
			c3 = c2 + 1;
			while (c3 <= 9)
			{
				ft_putchar(c1 + 48);
				ft_putchar(c2 + 48);
				ft_putchar(c3 + 48);
				check(c1);
				c3++;
			}
			c2++;
		}
		c1++;
	}
}

/* int main()
{
	ft_print_comb();
} */