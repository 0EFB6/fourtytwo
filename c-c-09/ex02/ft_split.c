/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:03:36 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/22 22:14:40 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	ount = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int ft_is_separator(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return (0);
}

char **ft_split(char *str, char *charset)
{
	int i;
	int size;
	char **tab;

	i = 0;
	size = ft_strlen(str);
	tab = (char **)malloc((size + 1) * sizeof(char *));
	while (i <= size)
	{
		tab[i] = (char *)malloc((size + 1) * sizeof(char));
		i++;
	}
	ft_tab(&str, &charset, &tab);
	return (tab);
}


