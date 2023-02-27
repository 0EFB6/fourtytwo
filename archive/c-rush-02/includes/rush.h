/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:16:31 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/26 16:33:49 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

char	*ft_open(char *file_name);
int		ft_run(int argc, char **argv);
int		ft_convert_overflow(int i, char *number, char *buffer, int number_len);
void	ft_convert(char *number, char *buffer);
void	ft_write_number(char *number, char *buffer);
void	ft_write_number_digit_two(char *number, char *buffer);
void	ft_write_zeros(int size, char *buffer);
void	ft_convert_modulo_one(int i, char *number, char *buffer);
void	ft_convert_modulo_two(int i, char *number, char *buffer);
void	ft_convert_modulo_zero(int i, char *number, char *buffer);

#endif
