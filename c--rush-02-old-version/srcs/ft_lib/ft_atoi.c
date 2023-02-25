/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:03:16 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/25 15:03:21 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	is_negative;
	int	num;

	is_negative = 1;
	num = 0;
	while (!(*str >= '0' && *str <= '9') && *str != '-' && *str != '+')
	{
		str++;
	}
	if (*str == '-')
	{
		is_negative = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - 48);
		str++;
	}
	return (is_negative * num);
}
