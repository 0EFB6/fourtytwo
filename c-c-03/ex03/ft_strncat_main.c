/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:10:59 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/12 13:16:36 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char * ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < nb && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

int main(void)
{
	char src[] = "iuewdfhbuiqione";
	char dest[] = "abcdef";
	unsigned int nb = 6;
	printf("%s", ft_strncat(dest,src,nb));
}
