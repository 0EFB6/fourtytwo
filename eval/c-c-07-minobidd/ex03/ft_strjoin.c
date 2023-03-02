/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minobidd <minobidd@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:23:15 by minobidd          #+#    #+#             */
/*   Updated: 2023/03/02 13:33:02 by minobidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, char *sep)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a])
		a = a + 1;
	while (src[b])
	{
		dest[a] = src[b];
		a = a + 1;
		b = b + 1;
	}
	b = 0;
	while (sep[b])
	{
		dest[a] = sep[b];
		b += 1;
		a += 1;
	}
	dest[a] = '\0';
	return (dest);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str += 1;
		i += 1;
	}
	return (0);
}

int	ft_strlen(int size, char **strs)
{
	int	ltr;
	int	a;
	int	b;

	ltr = 1;
	a = 0;
	while (size > a)
	{
		b = 0;
		while (strs[b])
		{
			ltr += 1;
			b += 1;
		}
		a += 1;
	}
	return (ltr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		length;
	int		a;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		return (str);
	}
	length = ft_strlen(size, strs);
	str = (char *)malloc((length + (size - 1)
				* ft_len(sep)) * sizeof(char *) + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	a = 0;
	while (size > a)
	{
		if (a == size - 1)
			str = ft_strcat(str, strs[a], "\0");
		else
			str = ft_strcat(str, strs[a], sep);
		a += 1;
	}
	return (str);
}
