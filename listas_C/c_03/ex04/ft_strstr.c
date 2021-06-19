int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	leng;
	unsigned int	i;

	leng = 0;
	while (to_find[leng])
		leng++;
	i = 0;
	if (!to_find[i])
		return (str + i);
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, leng) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
