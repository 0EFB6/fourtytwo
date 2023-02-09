/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:11:47 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/09 15:29:14 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
	char* ptr;

	ptr = dest;
	while(*src !='\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "helloworld";
	char	dest[] = "hey";
	printf("%s", ft_strcpy(dest, src));
}
