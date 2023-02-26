/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyong <zhyong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:12:10 by zhyong            #+#    #+#             */
/*   Updated: 2023/02/23 16:07:12 by zhyong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
/*
int main()
{
	int x,y,*a,*b;
	x = 0;
	y = 4;
	a = &x;
	b = &y;
	ft_ultimate_div_mod(a,b);
	printf("%d", x);
	printf("%d", y);
	return 0;
}
*/
