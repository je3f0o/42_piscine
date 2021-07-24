int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	if (nb < 1)
	{
		return (0);
	}
	i = 2;
	while (i <= nb)
	{
		result *= i;
		i += 1;
	}
	return (result);
}
