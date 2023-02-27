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

int		ft_check_number(char *num);
int		ft_error(void);
int		ft_error_dict(void);
int		ft_iterative_power(int nb, int power);
char	*ft_itoa(int nb);
int		ft_nbrlen(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);

#endif