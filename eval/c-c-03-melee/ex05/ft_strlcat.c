/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:18:20 by melee             #+#    #+#             */
/*   Updated: 2023/02/16 07:08:57 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
*/

unsigned int	count_str(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count_dest;
	unsigned int	count_src;

	count_dest = count_str(dest);
	count_src = count_str(src);
	i = 0;
	if (size < 1)
		return (count_src + size);
	while (src[i] != '\0' && i + count_dest < size - 1)
	{
		dest[count_dest + i] = src[i];
		i++;
	}
	dest[count_dest + i] = '\0';
	if (size < count_dest)
		return (count_src + size);
	else
		return (count_dest + count_src);
}
/*
int	main(void)
{
	char	src[] = "hello";
	char	dest[40] = "goodbye";
	char	src_test[] = "hello";
	char	dest_test[40] = "goodbye";

	printf("original return result is = %lu\n", strlcat(dest_test, src_test, 40));
	printf("original concat string is = %s\n", dest_test);
	printf("my return result is = %u\n", ft_strlcat(dest, src, 40));
	printf("my concat string is = %s\n", dest);
	return (0);	
}
*/
