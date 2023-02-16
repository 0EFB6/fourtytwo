/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkee <wkee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:13:32 by wkee              #+#    #+#             */
/*   Updated: 2023/02/14 20:37:37 by wkee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}

/*
int main(void)
{
	int test[5];

	test[0] = 'a';
	test[1] = 'b';
	test[2] = 'c';
	test[3] = 'd';
	test[4] = 'e';

	ft_rev_int_tab(test, 5);
	int	i;

	i = 0;
	while (i < 5)
	{
		write(1, &test[i], sizeof(int));
		i++;
	}
}
*/
