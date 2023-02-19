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

/* ft_check_arg.c */
int ft_check_count(int count, int size, int number);
int ft_check_arg(char *str, int size);

/* ft_check_table.c */
int ft_check_line(int **tab, int size, int x, int y);
int ft_check_column(int **tab, int size, int x, int y);
int ft_check_table(int **tab, int size, int x, int y);

/* ft_get_arg.c */
int ft_get_arg(char *str, int nb);

/* ft_init_table.c */
int ft_init_line(int **tab, int size, char *argv);
int ft_init_column(int **tab, int size, char *argv);
int ft_init_fill(int **tab, int size);
int **ft_init_table(char *argv, int size);

/* ft_is_num.c */
int ft_is_num(char c);

/* ft_print_table.c */
void	ft_print_table(int **tab, int size);

/* ft_putchar.c */
void	ft_putchar(char c);

/* ft_putnbr.c */
void	ft_putnbr(int nb);

/* ft_putstr.c */
void	ft_putstr(char *str);

/* ft_solve.c */
int ft_solve(int **tab, int x, int y, int size);

/* ft_strlen.c */
int ft_strlen(char *str);

#endif