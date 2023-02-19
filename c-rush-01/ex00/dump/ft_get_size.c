/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:47:38 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/18 23:32:27 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_valid(char *str, int size)
{
	int i;
	int nb;

	i = 0;
	nb = size / 4;
	while (i < size)
	{
		if (str[i] < '1' || str[i] > nb + '0')
			return (0);
		str += 2;
		i++;
	}
	return (nb);
}

int ft_get_size(char *str)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while(str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			size++;
		else
			return (0);
		i++;
		if (str[i] == ' ' && !str[i])
			return (0);
	}
	if (size == 16)
		return (ft_is_valid(str, size);
	return(0);
}
