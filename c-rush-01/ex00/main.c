#include "rush.h"
#include <stdlib.h>

int	error(void)
{
	ft_putstr("Error\n");
	return (0);
}

void	ft_destroy_tab(int **tab, int size)
{
	while (size)
	{
		free(tab[size]);
		size--;
	}
	free(tab);
}

int	main(int argc, char **argv)
{
	int	**tab;
	int	size;
	
	tab = NULL;
	size = 4;
	if (argc != 2)
		return (error());
	if (!ft_checkarg(argv[1], size))
		return (error());
	tab = ft_init(argv[1], size);
	if (tab != NULL)
	{
		ft_solve(tab, 1, 1, size);
		if (tab[size][size] != 0)
			ft_show(tab, size);
		else
			return (error());
		ft_destroy_tab(tab, size);
		return (0);
	}
	return (error());
}