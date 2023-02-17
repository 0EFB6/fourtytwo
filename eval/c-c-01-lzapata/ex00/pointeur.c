/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeur.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:11:53 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/17 10:38:38 by lzapata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main(void)
{
	int a = 4;
	int *nbr = &a;
	ft_ft (nbr);
	printf ("La valeur de a apres etre passe dans la fonction est de %d", a);
	return (0);
}
*/
