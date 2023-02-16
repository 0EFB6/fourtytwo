/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:40:46 by melee             #+#    #+#             */
/*   Updated: 2023/02/16 07:06:17 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		matched;

	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{	
			i = 0;
			matched = 1;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
				{
					matched = 0;
				}
				i++;
			}
			if (matched == 1)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "om omla om g homg123 a";
	char	to_find[] = "omg123";

	printf("original function result = %s\n", strstr(str, to_find));
	printf("result = %s", ft_strstr(str, to_find));
	return(0);
}
*/
