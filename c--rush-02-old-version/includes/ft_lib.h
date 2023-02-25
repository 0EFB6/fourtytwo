/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:16:31 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/25 22:31:33 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
#include <stddef.h>

int		ft_atoi(char *str);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_char_is_digit(char c);
int		ft_char_is_printable(char c);
int		ft_char_is_space(char c);
int		ft_check_arg_number(char *argv);
int		ft_error(void);
int		ft_error_dict(void);
int		ft_check_number(char *num);
int		ft_iterative_power(int nb, int power);
char	*ft_itoa(int nb);
int		ft_nbrlen(long nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void ft_strcpy(char *dest, char *src);
int ft_strlen(char *str);
char *ft_strstr(char *str, char *to_find);

#endif