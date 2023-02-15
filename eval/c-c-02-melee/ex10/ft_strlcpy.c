/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:26:53 by melee             #+#    #+#             */
/*   Updated: 2023/02/14 10:16:47 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (count);
}
/*
int	main(void)
{
	char	src[40] = "This is a plane in the sky";
	char	dest[0];
	unsigned int	check;
	unsigned int	length;

	dest[0] = '\0';
	check = 0;
	length = ft_strlcpy(dest, src, 40);
	while(check < 40)
	{
		if (dest[check] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c",dest[check]);
		}
		check++;
	}
	printf("\n");
	printf("count = %d\n", length);	
}
*/
