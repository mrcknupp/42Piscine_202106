int	ft_is_prime(int nb)
{
	int	i;
	int	remainder;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	while (i * i <= nb)
	{
		remainder = nb % i;
		if (!remainder)
			return (0);
		i++;
	}
	return (1);
}
