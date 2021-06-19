#include <unistd.h>

void	ft_print_numbers(void)
{	
	int	from;
	int	to;

	from = 48;
	to = 57;
	while (from <= to)
	{
		write(1, &from, 1);
		from++;
	}
}
