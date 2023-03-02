/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shechong <shechong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:00:23 by shechong          #+#    #+#             */
/*   Updated: 2023/03/02 13:49:19 by shechong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_double(int a, int b)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
}

void	ft_print_comb2(void)
{
	int	nums1;
	int	nums2;

	nums1 = 0;
	while (nums1 <= 99)
	{
		nums2 = nums1 + 1;
		while (nums2 <= 99)
		{
			write_double(nums1, nums2);
			if (nums1 < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nums2++;
		}
		nums1++;
	}
}
