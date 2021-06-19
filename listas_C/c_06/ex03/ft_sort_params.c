#include <unistd.h>

void	ft_write_str(char *c)
{
	while (*c != '\0')
	{
		write(1, c, 1);
		c++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char *argv[])
{
	int		counter;
	int		counter_int;
	char	*aux;

	counter = 1;
	while (counter < argc)
	{
		counter_int = counter;
		while (counter_int < argc)
		{
			if (ft_strcmp(argv[counter], argv[counter_int]) > 0)
			{
				aux = argv[counter];
				argv[counter] = argv[counter_int];
				argv[counter_int] = aux;
				counter = 0;
			}
			counter_int++;
		}
		counter++;
	}
	counter = 0;
	while (++counter < argc)
		ft_write_str(argv[counter]);
	return (0);
}
