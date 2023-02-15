/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweng-ho <lweng-ho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:05:23 by lweng-ho          #+#    #+#             */
/*   Updated: 2023/02/15 12:50:59 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
		if (i >= size - 1 - i)
		{
			break ;
		}
	}
}

int main(void)
{
	int test[1];

	test[0] = 48783;
	
	ft_rev_int_tab(test, 1);

	int i = 0;
	while (i <= 1)
	{
		write(1, &test[i], sizeof(int));
		i++;
	}
}
