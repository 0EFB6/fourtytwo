/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:26:53 by melee             #+#    #+#             */
/*   Updated: 2023/02/14 07:56:29 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[40] = "This is a plane in the sky";
	char	dest[0];
	unsigned int	check;

	dest[0] = '\0';
	check = 0;
	ft_strncpy(dest, src, 25);
	while(check < 30)
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
	
}
*/
