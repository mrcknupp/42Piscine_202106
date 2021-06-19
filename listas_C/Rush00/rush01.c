void	ft_putchar(char c);

void	width_d(int w)
{
	int	i;

	i = 2;
	if (w > 0)
	{
		ft_putchar('/');
	}
	while (w > i)
	{
		ft_putchar('*');
		i++;
	}
	if (w > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	height_w_control_d(int w)
{
	int	i;

	i = 2;
	while (w > i)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('*');
}

void	height_d(int h, int w)
{
	int	i;

	i = 2;
	while (h > i)
	{
		ft_putchar('*');
		if (w > 1)
		{
			height_w_control_d(w);
		}
		ft_putchar('\n');
		i++;
	}
}

void	width_2_d(int w)
{
	int	i;

	i = 2;
	ft_putchar('\\');
	while (w > i)
	{
		ft_putchar('*');
		i++;
	}
	if (w > 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush_01(int x, int y)
{
	width_d(x);
	height_d(y, x);
	if (y > 1)
	{
		width_2_d(x);
	}
}
