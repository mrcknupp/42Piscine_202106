int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && 'Z' >= str[i]))
			return (0);
		i++;
	}
	return (1);
}
