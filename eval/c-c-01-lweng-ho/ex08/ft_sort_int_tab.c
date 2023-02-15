/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweng-ho <lweng-ho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:15:09 by lweng-ho          #+#    #+#             */
/*   Updated: 2023/02/14 17:13:19 by lweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (j < size - 1)
	{
		while (i < size - 1)
		{
			if (tab[i] >= tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
		i = 0;
	}
}

/*int main(void)
{
	int arr[10];
	arr[0] = '1';
	arr[1] = '8';
	arr[2] = '4';
	arr[3] = '3';
	arr[4] = '6';
	arr[5] = '5';
	arr[6] = '0';
	arr[7] = '7';
	arr[8] = '9';
	arr[9] = '2';

	ft_sort_int_tab(arr, 10);

	int i;

	i = 0;
	while (i < 10)
	{
		write(1, &arr[i], 1);
		i++;
	}
}
*/
