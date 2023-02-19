/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:56:00 by hetan             #+#    #+#             */
/*   Updated: 2023/02/19 14:38:43 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	ns;
	int	nd;

	ns = 0;
	nd = 0;
	while (dest[nd])
		nd++;
	while (src[ns])
	{
		dest[nd + ns] = src[sn];
		ns++;
	}
	dest[nd + ns] = 0;
	return (dest);
}
