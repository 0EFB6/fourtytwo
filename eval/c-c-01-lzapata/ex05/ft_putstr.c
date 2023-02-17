/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzapata <lzapata@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:32:23 by lzapata           #+#    #+#             */
/*   Updated: 2023/02/17 11:47:06 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str)
{
	write (1, str, strlen(str));
}
int main(void)
{
	char str [] = "Sil te plait, affiche cette chaine de caracteres";
	ft_putstr(str);
	return (0);
}
