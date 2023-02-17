/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:39:38 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/16 10:30:31 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 127 && str[i] > 19)
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
