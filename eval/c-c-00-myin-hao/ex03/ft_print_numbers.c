/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myin-hao <myin-hao@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:11:49 by myin-hao          #+#    #+#             */
/*   Updated: 2023/02/09 22:37:12 by myin-hao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	s;

	s = '0';
	while (s <= '9')
	{
		write(1, &s, 1);
		s++;
	}
}