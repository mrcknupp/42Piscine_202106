void	ft_putchar(char c);

void	width_e(int w)
{
	int	i;

	i = 2;
	if (w > 0)
	{
		ft_putchar('o');
	}
	while (w > i)
	{
		ft_putchar('-');
		i++;
	}
	if (w > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	height_w_control_e(int w)
{
	int	i;

	i = 2;
	while (w > i)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('|');
}

void	height_e(int h, int w)
{
	int	i;

	i = 2;
	while (h > i)
	{
		ft_putchar('|');
		if (w > 1)
		{
			height_w_control_e(w);
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush_00(int x, int y)
{
	width_e(x);
	height_e(y, x);
	if (y > 1)
	{
		width_e(x);
	}
}
