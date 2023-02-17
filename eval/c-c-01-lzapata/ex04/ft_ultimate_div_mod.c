/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:55:11 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/17 10:54:59 by lzapata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;	

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
/*
int main (void)
{
	int a;
	int b;
	int c;
	int d;

	a = 21;
	b = 7;
	ft_ultimate_div_mod(&a, &b);
	c = a;
	d = b;
	printf("result of division is %d", c);
	printf("result of modulo is %d", d);
	return (0);
}
*/
