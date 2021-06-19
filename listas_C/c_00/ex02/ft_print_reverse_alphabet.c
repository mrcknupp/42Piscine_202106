#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	from;
	int	to;

	from = 97;
	to = 122;
	while (from <= to)
	{
		write(1, &to, 1);
		to--;
	}
}
