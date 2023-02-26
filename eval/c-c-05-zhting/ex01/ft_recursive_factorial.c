/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhting <zhting@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:49:42 by zhting            #+#    #+#             */
/*   Updated: 2023/02/21 19:51:39 by zhting           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	temp;

	if (nb < 0)
		return (0);
	temp = 1;
	if (nb > 0)
		temp *= nb * ft_recursive_factorial(nb - 1);
	return (temp);
}
