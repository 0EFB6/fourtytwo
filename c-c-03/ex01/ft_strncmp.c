/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:00:11 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/10 11:27:10 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2)
	{
		if (*s1 == '0' || i >= n - 1)
		{
			return (0);
			s1++;
			s2++;
			i++;
		}
	}
	if (*(unsigned char *)s1 < *(unsigned char *)s2)
	{
		return (-1);
	}
	return (1);
}
