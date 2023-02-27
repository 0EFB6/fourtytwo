/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:20:27 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/27 19:42:24 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct display_info
{
	int p;
	int len_input;
} t_display_info;

int ft_open(char *basen, int *f, char *filename);
int ft_file_len(char *base, long long *len, char *filename);
void ft_put_filename(char *filename, int p);
int ft_display_file(int argc, char *basen, char *filename, t_display_info info);
long long ft_getnum(char *str);
void	ft_putchar(char c);
int	ft_puterr(char *basen, char *filename, char *err, char *info);
void ft_putstr(char *str);
void ft_puttail(char *str);
int ft_tail_input(char *basen, long long len_input);

#endif
