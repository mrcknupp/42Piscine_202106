#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;
	int		n_args;

	name = argv[0];
	n_args = argc;
	if (n_args > 0)
	{
		while (*name != '\0')
		{
			write(1, name, 1);
			name++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
