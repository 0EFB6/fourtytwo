/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:10:59 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/12 16:30:03 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int dest_len;
	unsigned int src_len;

	a = 0;
	b = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	b = dest_len;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[a] != '\0' && a < size - dest_len - 1)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest_len + src_len);
}

int main(void)
{
	char src[] = "Born to code";
	char dest[] = "1337 42";
	printf("%i \n", ft_strlcat(dest,src,13));
	printf("%s \n", dest);
}
