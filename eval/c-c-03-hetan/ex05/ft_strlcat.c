/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:25:42 by hetan             #+#    #+#             */
/*   Updated: 2023/02/19 14:37:58 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ns;
	unsigned int	nd;

	ns = 0;
	nd = 0;
	while (dest[nd])
		nd++;
	while (src[ns] && ns < size)
	{
		dest[nd + ns] = src[ns];
		ns++;
	}
	dest[nd + ns] = 0;
	return (dest);
}
