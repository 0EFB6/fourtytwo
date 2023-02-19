/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:38:42 by hetan             #+#    #+#             */
/*   Updated: 2023/02/17 23:00:53 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	s;
	unsigned int	f;

	s = 0;
	f = 0;
	if (to_find[f] == 0)
		return (str);
	while (str[s])
	{
		while (str[s + f] != 0 && str[s + f] == to_find[f])
		{
			if (to_find[f + 1] == 0)
				return (&str[s]);
			f++;
		}
		s++;
	}
	return (0);
}
