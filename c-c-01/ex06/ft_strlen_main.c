/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:41:15 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/09 14:33:26 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	main(void)
{
	char c='!';
	char* abc = &c;

	ft_strlen(abc);
}
