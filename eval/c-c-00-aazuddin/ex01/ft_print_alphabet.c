/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazuddin <aazuddin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:49:55 by aazuddin          #+#    #+#             */
/*   Updated: 2023/02/09 12:56:13 by aazuddin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 97;
	while (letter >= 97 && letter <= 122)
	{
		ft_putchar(letter);
		letter++;
	}
}
/*main to run the function
int	main(void) {
	ft_print_alphabet();
	return (0);
}
*/
