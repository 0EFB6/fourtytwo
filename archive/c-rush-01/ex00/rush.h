/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:09:13 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/19 16:09:14 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

int		ft_check_arg(char *str, int size);
int		ft_check_table(int **tab, int size, int x, int y);
void	ft_destroy_table(int **tab, int size);
int		error(void);
int		ft_get_arg(char *str, int nb);
int		**ft_init_table(char *argv, int size);
int		ft_is_num(char c);
void	ft_print_table(int **tab, int size);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_solve(int **tab, int x, int y, int size);

#endif
