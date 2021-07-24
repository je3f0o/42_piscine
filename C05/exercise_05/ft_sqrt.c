int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	i = 1;
	result = 1;
	while (result <= nb)
	{
		i += 1;
		result = i * i;
	}
	return (i - 1);
}
