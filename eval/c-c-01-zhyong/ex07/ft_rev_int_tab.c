/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyong <zhyong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:53:39 by zhyong            #+#    #+#             */
/*   Updated: 2023/02/23 17:10:39 by zhyong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	first;

	first = tab[0];
	i = 0;
	while (i < size)
	{
		if (i == size - 1)
		{
			tab[i] = first;
			break ;
		}
		tab[i] = tab[i + 1];
		i++;
	}
}
/*
int main()
{
	int t[5] = {1,2,3,4,5};
	int s = 5;
	ft_rev_int_tab(t,s);
	for	(int i = 0; i < s; i++)
	{
		printf("%d", t[i]);
	}
	return 0;
}
*/