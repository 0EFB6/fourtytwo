/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkee <wkee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:17:21 by wkee              #+#    #+#             */
/*   Updated: 2023/02/14 20:38:07 by wkee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/*
int main(void)
{
	int test[10];

	test[0] = 57;
	test[1] = 56;
	test[2] = 50;
	test[3] = 48;
	test[4] = 51;
	test[5] = 55;
	test[6] = 49;
	test[7] = 52;
	test[8] = 54;
	test[9] = 53;

	ft_sort_int_tab(test, 10);
	int i;

	i=0;
	while (i < 10)
	{
		write(1, &test[i], sizeof(int));
		i++;
	}
}
*/
