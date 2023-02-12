/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:10:36 by cwei-she          #+#    #+#             */
/*   Updated: 2023/02/12 12:39:26 by cwei-she         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void rush(int x, int y)
{
	/* Declare two variable for the output(table) */
	int row;
	int col;

	/* Initialize the row and column to be 0, not 1 */
	row = 0;
	col = 0;

	/* Return nothing if one of the number isn't positive */
	/* Negative number can't draw a graph right? */
	if (x <= 0 || y <= 0)
	{
		return ;
	}

	/* One while loop & one nested while loop */
	/* To draw the table row by row */
	while (row < y)
	{
		/* Reset the column to first place (which is 0) */
		col = 0;

		while (col < x)
		{
			if (col == 0 && (row == 0 || row == y - 1))
			{
				ft_putchar('o');
			}
			else if (col == x - 1 && (row == 0 || row == y - 1))
			{
				ft_putchar('o');
			}
			else if (row == 0 || row == y - 1)
			{
				ft_putchar('-');
			}
			else if (col == 0 || col == x - 1)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
			col++;
		}
		/* Proceed to next line */
		ft_putchar('\n');

		row++;
	}
}
