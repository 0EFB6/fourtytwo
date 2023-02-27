/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:11:16 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/24 10:48:52 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcopy(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*word;

	i = 0;
	if (ac < 0)
		ac = 0;
	word = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!word)
		return (NULL);
	while (i < ac)
	{
		word[i].size = ft_strlen(av[i]);
		word[i].str = av[i];
		word[i].copy = ft_strcopy(av[i]);
	}
	word[i].str = 0;
	return (word);
}
