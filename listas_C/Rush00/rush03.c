void	ft_putchar(char c);

void	width_b(int w)
{
	int	i;

	i = 2;
	if (w > 0)
	{
		ft_putchar('A');
	}
	while (w > i)
	{
		ft_putchar('B');
		i++;
	}
	if (w > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	height_w_control_b(int w)
{
	int	i;

	i = 2;
	while (w > i)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('B');
}

void	height_b(int h, int w)
{
	int	i;

	i = 2;
	while (h > i)
	{
		ft_putchar('B');
		if (w > 1)
		{
			height_w_control_b(w);
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush_03(int x, int y)
{
	width_b(x);
	height_b(y, x);
	if (y > 1)
	{
		width_b(x);
	}
}
