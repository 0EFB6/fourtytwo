/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:20:19 by melee             #+#    #+#             */
/*   Updated: 2023/02/14 12:49:22 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_to_hexa(char *str, int i)
{
	ft_putchar((str[i] / 16) + '0');
	if ((str[i] % 16) < 10)
		ft_putchar((str[i] % 16) + '0');
	else
		ft_putchar('a' + ((str[i] % 16) - 10));
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			convert_to_hexa(str, i);
		}
		i++;
	}	
}
/*
int	main(void)
{
	char	str[40] = "Coucou\ttu vas bien\n ?";

	ft_putstr_non_printable(str);
	return (0);
}
*/
