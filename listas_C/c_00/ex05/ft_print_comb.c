#include <unistd.h>

void	ft_write(int x, int y, int z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (!(x == 55 && y == 56 && z == 57))
	{
		write(1, ", ", 3);
	}	
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 48;
	y = 49;
	z = 50;
	while (x <= 55)
	{
		while (y <= 56)
		{
			while (z <= 57)
			{
				ft_write(x, y, z);
				z++;
			}
			y++;
			z = y + 1;
		}			
		x++;
		y = x;
	}
}
