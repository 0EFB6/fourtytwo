/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:51:19 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/24 23:53:45 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int ans;

	ans = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		ans = ans * nb;
		power--;
	}
	return (ans);
}
