int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
