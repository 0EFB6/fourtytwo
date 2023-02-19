#include "rush.h"

int	ft_check_line(int **tab, int size, int x, int y)
{
	int	tmp;
	int	i;

	tmp = tab[y][x];
    i = 0;
	x = 1;
	while (x <= size)
	{
		if (tmp == tab[y][x])
			i++;
		x++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

int	ft_check_column(int **tab, int size, int x, int y)
{
	int	tmp;
	int	i;

	
	tmp = tab[y][x];
	i = 0;
	y = 1;
	while (y <= size)
	{
		if (tmp == tab[y][x])
			i++;
		y++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

int	ft_check(int **tab, int size, int x, int y)
{
	if (ft_check_line(tab, size, x, y) && ft_check_column(tab, size, x, y))
		return (1);
	return (0);
}