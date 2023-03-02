/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweng-ho <lweng-ho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:07:56 by lweng-ho          #+#    #+#             */
/*   Updated: 2023/03/02 12:37:41 by lweng-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	char	c;
	int		num;

	i = 0;
	while (par[i].str != NULL)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		if (par[i].size != 0)
		{
			num = par[i].size;
			while (num > 0)
			{
				c = (num % 10) + '0';
				write(1, &c, 1);
				num /= 10;
			}
		}
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
