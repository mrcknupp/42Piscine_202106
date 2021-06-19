#include <unistd.h>

void	ft_is_negative(int n)
{
	char	r;

	r = 'N';
	if (n >= 0)
	{
		r = 'P';
	}
	write(1, &r, 1);
}
