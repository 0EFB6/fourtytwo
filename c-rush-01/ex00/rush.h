/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:44:00 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/18 23:48:00 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
#define RUSH_H

int	ft_strlen(char *str);
int	ft_is_num(char c);
int	ft_getarg(char *str, int nb);
int	**ft_init(int size, char *argv);
int	ft_init_fill(int **tab, int size);
int	ft_solve(int **tab, int x, int y, int size);
int	ft_init_line(int **tab, int size, char *argv);
int	ft_init_column(int **tab, int size, char *argv);
int	ft_check_total(int **tab, int x, int y, int size);
int	ft_check_line(int **tab, int size, int x, int y);
int	ft_check_column(int **tab, int size, int x, int y);
int	ft_check_count(int count, int size, int number);
int	ft_checkarg(char *str, int size);
int	ft_check(int **tab, int size, int x, int y);
int	ft_check_view_colum_total(int	**tab, int	x, int	y, int size);
int	ft_check_view_line_total(int	**tab, int	x, int	y, int size);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_show(int **tab, int size);

#endif
