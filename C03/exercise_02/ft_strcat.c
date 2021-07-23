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

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j] != 0)
	{
		s1[i] = s2[j];
		i += 1;
		j += 1;
	}
	return (s1);
}
