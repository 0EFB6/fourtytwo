/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliyuan <mliyuan@student.42.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:47:54 by mliyuan           #+#    #+#             */
/*   Updated: 2023/02/26 15:34:36 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_i;
int	g_nb;
int	g_sign;

#include <stdio.h>
int	ft_atoi(char *str)
{
	g_i = 0;
	g_nb = 0;
	g_sign = 1;
	while (str[g_i] == 32 || (str[g_i] >= 9 && str[g_i] <= 13))
		g_i++;
	while (str[g_i] != '\0')
	{
		if (str[g_i] == '-' || str[g_i] == '+')
		{
			if (str[g_i] == '-')
			{
				g_sign *= -1;
				printf("Signed changed");
			}
			g_i++;
			printf("loop ran");
		}
		else if (str[g_i] >= 48 && str[g_i] <= 57)
		{
			g_nb = (g_nb * 10) + (str[g_i] - 48);
			g_i++;
			printf("ran");
		}
		else
			break ;
	}
	return (g_nb * g_sign);
}

int main()
{
	char str[] = "2147483647";
	printf("%d", ft_atoi(str));
}
