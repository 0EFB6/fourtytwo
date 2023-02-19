/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:30:04 by hetan             #+#    #+#             */
/*   Updated: 2023/02/17 22:37:35 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	s;
	unsigned int	d;

	s = 0;
	d = 0;
	while (dest[d])
	{
		d++;
	}
	while (src[s] && nb > s)
	{
		dest[d + s] = src[s];
		s++;
	}
	dest[d + s] = 0;
	return (dest);
}
