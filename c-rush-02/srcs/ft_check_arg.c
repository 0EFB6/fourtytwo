/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:21:58 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/24 22:34:48 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_check_arg(char *argv)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (argv[len])
		len++;
	while (argv[i] && (argv[i] >= '0' && argv[i] <= '9'))
		i++;
	if (len == i && len != 0)
		return (0);
	return (1);
}
