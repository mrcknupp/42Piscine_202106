char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	leng;
	unsigned int	i;

	leng = 0;
	while (dest[leng])
		leng++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[leng + i] = src[i];
		i++;
	}
	dest[leng + i] = '\0';
	return (dest);
}
