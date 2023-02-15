/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweng-ho <lweng-ho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:15:03 by lweng-ho          #+#    #+#             */
/*   Updated: 2023/02/15 12:44:09 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	divide;
	int	remainder;

	divide = a / b;
	remainder = a % b;
	*div = divide;
	*mod = remainder;
}
