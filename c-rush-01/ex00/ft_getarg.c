#include "rush.h"

int	ft_getarg(char *str, int nb)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 0;
	result = 0;
	while (str[i])
	{
		while (!ft_is_num(str[i]))
			i++;
		while (ft_is_num(str[i]))
		{
			result = str[i] - 48;
			i++;
			if (!ft_is_num(str[i]))
				count++;
			if (count == nb)
				return (result);
		}
		result = 0;
		i++;
	}
	return (-1);
}