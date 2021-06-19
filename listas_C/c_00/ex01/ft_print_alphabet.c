#include <unistd.h>

void	ft_print_alphabet(void)
{	
	int	from;
	int	to;

	from = 97;
	to = 122;
	while (from <= to)
	{
		write(1, &from, 1);
		from++;
	}	
}
