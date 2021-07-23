int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	difference;

	i = 0;
	difference = s1[i] - s2[i];
	while ((difference == 0) && (s1[i] != 0))
	{
		difference = s1[i] - s2[i];
		i += 1;
	}
	return (difference);
}
