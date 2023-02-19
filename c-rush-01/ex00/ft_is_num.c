/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:38:48 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/18 23:39:52 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
