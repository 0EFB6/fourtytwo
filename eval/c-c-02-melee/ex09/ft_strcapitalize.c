/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:19:41 by melee             #+#    #+#             */
/*   Updated: 2023/02/14 07:33:43 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		capital_position;
	char	d;

	i = 0;
	capital_position = 0;
	while (str[i] != '\0')
	{
		d = str[i - 1];
		if (d < 48 || (d > 57 && d < 65) || (d > 90 && d < 97) || d > 122)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				capital_position = i;
			}
			if (str[i] >= 65 && str[i] <= 90)
				capital_position = i;
		}	
		else if ((i > capital_position) && (str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[100] = " sAluT, COMm42EnT Tu vas ? 42mots quArAnte-Deux";
	ft_strcapitalize(str);
	printf("%s", str);
	return(0);
}
*/
