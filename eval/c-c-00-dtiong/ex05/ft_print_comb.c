/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiong <dtiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:14:19 by dtiong            #+#    #+#             */
/*   Updated: 2023/02/12 15:35:55 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnumber(int x, int y, int z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	printcommaspace(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= '9')
	{	
		y = x + 1;
		while (y <= '9')
		{	
			z = y + 1;
			while (z <= '9')
			{
				printnumber(x, y, z);
				if (x != '7')
					printcommaspace();
				z++;
			}
			y++;
			z = y + 1;
		}
		x++;
		y = x + 1;
	}
}

int main()
{
	ft_print_comb();
}
