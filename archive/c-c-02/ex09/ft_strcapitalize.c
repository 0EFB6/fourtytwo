/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:20:26 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/10 10:32:49 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;
	int		ticker;

	ptr = str;
	ticker = 1;
	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr < 'z')
			|| (*ptr >= 'A' && *ptr <= 'Z')
			|| (*ptr >= '0' && *ptr <= '9'))
		{
			if (ticker == 1 && *ptr >= 'a' && *ptr <= 'z')
				*ptr -= 32;
			else if (ticker == 0 && *ptr >= 'A' && *ptr <= 'Z')
				*ptr += 32;
			ticker = 0;
		}
		else
			ticker = 1;
		ptr++;
	}
	return (str);
}
