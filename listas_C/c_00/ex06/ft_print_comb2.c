#include <unistd.h>
void	write_int(int n)
{
	int	unit;
	int	dozen;

	dozen = n / 10;
	dozen += 48;
	write(1, &dozen, 1);
	unit = n % 10;
	unit += 48;
	write(1, &unit, 1);
}

void	write_values(int x, int y)
{
	if (!(x == 0 && y == 1))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
	write_int(x);
	write(1, " ", 1);
	write_int(y);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		while (y <= 99)
		{
			write_values(x, y);
			y++;
		}
		x++;
		y = x + 1;
	}
}
