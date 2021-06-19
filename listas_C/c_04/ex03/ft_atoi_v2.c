int	ft_atoi(char	*str)
{
	int	i;
	int	count_minus;
	int	dest;

	count_minus = 0;
	dest = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				count_minus += 1;
		}
		else
			dest = dest * 10 + (str[i] - 48);
		i++;
	}
	if (count_minus % 2 != 0)
		return (dest *= -1);
	return (dest);
}
