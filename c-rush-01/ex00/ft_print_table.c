#include "rush.h"

void	ft_show(int **tab, int size)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (a < size + 1)
	{
		while (b < size + 1)
		{
			ft_putnbr(tab[a][b]);
			b++;
			if (b < size + 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		b = 1;
		a++;
	}
	return ;
}