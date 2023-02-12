/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhbin-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:28:46 by muhbin-m          #+#    #+#             */
/*   Updated: 2023/02/12 15:07:44 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	comb(int data[], int i, int index, int n)
{
	int		j;

	j = 0;
	if (index == n)
	{
		while (j < n)
		{
			ft_putchar(data[j] + '0');
			j ++;
		}
		ft_putchar(',');
	}
	while (i <= 9)
	{
		data[index] = i;
		comb (data, i + 1, index + 1, n);
		i ++;
	}
}

void	ft_print_combn(int n)
{
	int		data[10];

	if (n <= 0 || n >= 10)
	{
		return ;
	}
	else
	{
		comb(data, 0, 0, n);
	}
}

int main()
{
	ft_print_combn(3);
}
