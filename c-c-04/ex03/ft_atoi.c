/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:50:34 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/15 13:16:28 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	is_negative;
	int	num;

	is_negative = 0;
	num = 0;
	while (!(*str >= '0' && *str <= '9') && *str != '-' && *str != '+')
	{
		str++;
	}
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			is_negative = !is_negative;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (is_negative)
			num = num * 10 - (*str - 48);
		else
			num = num * 10 + (*str - 48);
		str++;
	}
	return (num);
}
