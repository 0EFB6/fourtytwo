/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:48:38 by asaravan          #+#    #+#             */
/*   Updated: 2023/02/15 15:39:53 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	extension(int nb, int i, int j, char str[10])
{
	char	temp;

	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	while (j < i / 2)
	{
		temp = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = temp;
		j++;
	}
	write(1, str, i);
}

void	ft_putnbr(int nb)
{
	char	str[10];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (nb == 0)
		str[i++] = '0';
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	extension(nb, i, j, str);
}

int main()
{
	ft_putnbr(-2147483647);
}
/*
 ** Comments
 ** line 18: min possible val is -2,147,483,647 (10 bytes)
 ** line 22-24: check if its 0 or -ve 
 ** line 26: make -ve integers +ve for easier manipulation
 ** line 32: modulus gives digit in ones
 ** store the backmost number in the front with proper ASCII code
 ** line 33: move to the next place value
 ** counter i now has the length of the string
 ** line 36-42: reverse the order of the string
*/
