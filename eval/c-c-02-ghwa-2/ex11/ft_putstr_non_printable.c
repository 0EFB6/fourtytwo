/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:39:01 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/17 09:17:03 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pchar(char c)
{
	write(1, &c, 1);
}

void	phex(int nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		phex(nb / 10);
		phex(nb % 10);
	}
	else
		phex(hex[nb]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			pchar('\\');
			if (str[i] < 16)
				pchar('0');
			phex(str[i]);
		}
		else
			pchar(str[i]);
		i++;
	}
}
