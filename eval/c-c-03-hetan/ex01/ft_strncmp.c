/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:42:47 by hetan             #+#    #+#             */
/*   Updated: 2023/02/19 14:29:06 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	c;

	c = 0;
	while (s1[c] && s2[c] && n > c)
	{
		if (s1[c] == s2[c])
			return (0);
		else if (s1[c] > s2[c])
			return (1);
		else if (s1[c] < s2[c])
			return (-1);
		c++;
	}
	return (s1[c] - s2[c]);
}
