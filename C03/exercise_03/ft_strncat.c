int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		index += 1;
	}
	return (index);
}

char	*ft_strncat(char *s1, char *s2, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(s1);
	while (j < nb && s2[j] != 0)
	{
		s1[i] = s2[j];
		i += 1;
		j += 1;
	}
	return (s1);
}
