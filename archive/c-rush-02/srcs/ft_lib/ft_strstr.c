/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:06:05 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/25 15:06:32 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[b] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
			b++;
		if (to_find[b] == '\0')
			return (str + a);
		a++;
		b = 0;
	}
	return (0);
}
