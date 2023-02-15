#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_swap(char *a, char *b)
{
	char	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_string(char *str[], int size)
{
	int		a;
	int		b;

	a = 0;
	while (a < size - 1)
	{
		b = 0;
		while (b < size - 1 - a)
		{
			if (ft_strcmp(str[b], str[b + 1]) < 0)
			{
				ft_swap(str[b + 1], str[b]);
			}
			b++;
		}
		a++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	ft_sort_string(argv + 1, argc - 1);
	i = argc - 1;
	while (i > 0)
	{
		ft_putchar(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}