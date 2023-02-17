/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 07:58:34 by melee             #+#    #+#             */
/*   Updated: 2023/02/16 13:16:52 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r')
		return (1);
	else if (*str == '\t' || *str == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	minus_count;
	int	result;

	minus_count = 0;
	result = 0;
	while (*str != '\0' && is_space(str))
	{
		str++;
	}
	while (*str != '\0' && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (minus_count % 2)
		return (-1 * result);
	else
		return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "  ---+--+1234ab567";

	printf("input = %s\n", str);
	printf("output = %d", ft_atoi(str));
	return (0);
}
*/
