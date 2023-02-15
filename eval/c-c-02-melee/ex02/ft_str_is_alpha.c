/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:32:08 by melee             #+#    #+#             */
/*   Updated: 2023/02/13 14:19:00 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char str[40]="abzZA[B"; 

	printf("%d", ft_str_is_alpha(str));
	return(0);
}
*/
