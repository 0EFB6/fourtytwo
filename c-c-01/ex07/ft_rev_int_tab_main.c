/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:51:16 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/09 14:25:25 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	z;

	z = 0;
	while(z < size / 2)
	{
		ft_swap(tab + 1, tab + size - z - 1);
		z++;
	}
}

int	main(void)
{
	int abc = 234;
	int *tab = &abc;
	ft_rev_int_tab(tab, 3);
	return (0);
}
