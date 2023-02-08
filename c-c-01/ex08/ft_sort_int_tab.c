/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:55:02 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/08 23:01:38 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;

	a = size - 1;
	while (a > 0)
	{
		b = 0;
		while (b < a)
		{
			if (tab[b] > tab[b + 1])
			{
				ft_swap(&tab[b], &tab[b + 1]);
			}
			b++;
		}
		a++;
	}
}
