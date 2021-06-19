void	ft_putchar(char c);

void	width_c(int w)
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
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	height_w_control_c(int w)
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

void	height_c(int h, int w)
{
	int	i;

	i = 2;
	while (h > i)
	{
		ft_putchar('B');
		if (w > 1)
		{
			height_w_control_c(w);
		}
		ft_putchar('\n');
		i++;
	}
}

void	width_2_c(int w)
{
	int	i;

	i = 2;
	ft_putchar('C');
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

void	rush_02(int x, int y)
{
	width_c(x);
	height_c(y, x);
	if (y > 1)
	{
		width_2_c(x);
	}
}
