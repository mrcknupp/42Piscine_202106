int	ft_iterative_factorial(int nbr)
{
	int	factor;

	if (nbr < 0)
		return (0);
	else if (nbr == 0 || nbr == 1)
		return (1);
	factor = 1;
	while (nbr)
	{
		factor *= nbr;
		nbr--;
	}
	return (factor);
}
