/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygoh <ygoh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:29:50 by ygoh              #+#    #+#             */
/*   Updated: 2023/03/02 14:42:43 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	if (size < i)
		return (ft_strlen(src) + size);
	j = 0;
	while (src[j] != '\0' && j < size - i - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
#include <stdio.h>
int main(void)
{
	char src[] = "Born to code";
	char dest[] = "18759 42";
	printf("%i \n", ft_strlcat(dest, src, 7));
	printf("%s \n", dest);
}
