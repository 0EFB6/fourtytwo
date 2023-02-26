/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhting <zhting@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:51:57 by zhting            #+#    #+#             */
/*   Updated: 2023/02/21 19:53:33 by zhting           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	temp;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	temp = nb;
	if (power > 1)
		temp *= ft_recursive_power(nb, power - 1);
	return (temp);
}
