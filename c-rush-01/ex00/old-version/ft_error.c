/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:05:56 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/19 13:06:06 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	error_1(void)
{
	ft_putstr("Error: Argument count is not 2. \n");
	return (0);
}

int	error_2(void)
{
	ft_putstr("Error: Argument input is not valid. \n");
	return (0);
}

int	error_3(void)
{
	ft_putstr("Error: Unable to solve. Input may not be a valid one. \n");
	return (0);
}

int	error(void)
{
	ft_putstr("Unknown Error. \n");
	return (0);
}