#include "rush.h"
#include <stdlib.h>

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
		return (error_1());
	if (!ft_check_arg(argv[1], size))
		return (error_2());
	tab = ft_init_table(argv[1], size);
	if (tab != NULL)
	{
		ft_solve(tab, 1, 1, size);
		if (tab[size][size] != 0)
			ft_print_table(tab, size);
		else
			return (error_3());
		ft_destroy_tab(tab, size);
		return (0);
	}
	return (error());
}