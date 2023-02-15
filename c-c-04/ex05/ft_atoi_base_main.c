/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:47:18 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/15 13:31:42 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int ft_valid_base(char* base)
{
	char	*ptr;

	if (ft_strlen(base) < 2)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		ptr = base + 1;
		while (*ptr)
		{
			if (*base == *ptr)
				return (0);
			ptr++;
		}
		base++;
	}
	return (1);
}

int	ft_get_position(char *base, char c)
{
	int	i;

	i = 0;
	while (*base)
	{
		if (*base == c)
			return (i);
		i++;
		base++;
	}
	return (-1);
}

int ft_atoi_base(char *str, char* base)
{
	bool is_negative;
	int num;

	is_negative = 0;
	num = 0;
	if (!ft_valid_base(base))
		return (0);
	while (!(*str >= '0' && *str <= '9') && *str != '-' && *str != '+')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = !is_negative;
		str++;
	}
	while (*str != '\0' && ft_get_position(base, *str) != -1)
	{
		if (is_negative)
			num = num * ft_strlen(base) - ft_get_position(base, *str);
		else
			num = num * ft_strlen(base) + ft_get_position(base, *str);
		str++;
	}
	return (num);
}

int		main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}
