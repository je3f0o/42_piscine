int	is_finished(int nb, int *is_finished)
{
	if (nb <= 0)
	{
		*is_finished = 1;
		return (0);
	}
	if (nb <= 3)
	{
		*is_finished = 1;
		return (1);
	}
	if (nb % 2 == 0)
	{
		*is_finished = 1;
		return (0);
	}
	return (-1);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	finished;
	int	ret;

	i = 5;
	finished = 0;
	ret = is_finished(nb, &finished);
	if (finished == 1)
	{
		return (ret);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	n = nb + 1;
	while (ft_is_prime(n) == 0)
	{
		n += 1;
	}
	return (n);
}
