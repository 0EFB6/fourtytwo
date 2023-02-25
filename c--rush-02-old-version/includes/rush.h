/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:16:31 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/25 21:12:19 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

char *ft_open_read_one_arg(void);
char *ft_open_read_two_arg(char *file_name);
void ft_run(int argc, char **argv);
void ft_convert(char *number, char *buffer);

#endif