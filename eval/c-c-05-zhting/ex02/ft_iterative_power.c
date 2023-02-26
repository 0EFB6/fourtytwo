/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhting <zhting@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:50:34 by zhting            #+#    #+#             */
/*   Updated: 2023/02/21 19:51:33 by zhting           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	temp = nb;
	while (power > 1)
	{
		temp *= nb;
		power--;
	}
	return (temp);
}
