/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 07:10:32 by melee             #+#    #+#             */
/*   Updated: 2023/02/13 09:48:12 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char *src;
	char dest[0];
	int i;

	src = "hello";
	dest[0] = '\0';
	i=0;
	ft_strcpy(dest, src);
	write(1, dest, 6);
}
*/
