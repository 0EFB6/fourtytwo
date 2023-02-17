/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:00:40 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/17 10:55:01 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 123 && str[i] > 97)
		{
			if ((str[i - 1] == ' ' || str[i - 1] < 46) && (str[i - 1] != '\''))
			{	
				str[i] = str[i] - 32;
				i++;
			}
			else
				i++;
		}
		else
			i++;
	}
	return (str);
}

/*
int	main(void)
{
	char c[100] = "cos you're kinda Bad 4me+just-bad";
	printf("%s\n", ft_strcapitalize(c));
	return (0);
}
*/
