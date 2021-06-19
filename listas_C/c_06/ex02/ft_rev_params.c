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

int	main(int argc, char *argv[])
{
	int	counter;

	counter = argc - 1;
	if (argc > 1)
	{
		while (counter >= 1)
		{
			ft_write_str(argv[counter]);
			counter--;
		}
	}
	return (0);
}
