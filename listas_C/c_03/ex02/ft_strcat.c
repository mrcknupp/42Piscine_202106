char	*ft_strcat(char *dest, char *src)
{
	int	leng;
	int	i;

	leng = 0;
	while (dest[leng])
		leng++;
	i = 0;
	while (src[i])
	{
		dest[leng + i] = src[i];
		i++;
	}
	dest[leng + i] = '\0';
	return (dest);
}
