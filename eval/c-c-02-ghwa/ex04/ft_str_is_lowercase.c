/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:39:38 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/14 12:10:51 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 123 && str[i] > 96)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char words[100] = "";
	printf("%d", ft_str_is_lowercase(words));
	return(0);
}
*/
