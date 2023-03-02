/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minobidd <minobidd@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:00:15 by minobidd          #+#    #+#             */
/*   Updated: 2023/03/02 10:16:51 by minobidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		a;
	char	*locate;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	locate = (char *)malloc(sizeof(char) * (length + 1));
	if (locate == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (src[a] != '\0')
	{
		locate[a] = src[a];
		a++;
	}
	locate[a] = '\0';
	return (locate);
}
