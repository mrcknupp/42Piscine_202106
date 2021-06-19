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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb) && nb < 2147483629)
		nb++;
	if (nb > 2147483629)
		return (0);
	return (nb);
}
