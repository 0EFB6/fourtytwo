/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtiong <dtiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:33:57 by dtiong            #+#    #+#             */
/*   Updated: 2023/02/12 15:32:55 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}

int main()
{
	ft_print_alphabet();
}
