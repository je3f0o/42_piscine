void	handle_sign(char ch, int *sign)
{
	if (ch == '-')
	{
		*sign *= -1;
	}
}

int	handle(char ch, int old_value, int *sign, int *is_finished)
{
	if (*is_finished == 1)
	{
		return (old_value);
	}
	if (ch <= 32)
	{
		return (0);
	}
	if (ch == '-' || ch == '+')
	{
		handle_sign(ch, sign);
		return (old_value);
	}
	if (ch >= '0' && ch <= '9')
	{
		return (old_value * 10 + (ch - '0'));
	}
	*is_finished = 1;
	return (old_value);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;
	int	is_finished;

	i = 0;
	result = 0;
	sign = 1;
	is_finished = 0;
	while (str[i] != 0)
	{
		result = handle(str[i], result, &sign, &is_finished);
		i += 1;
	}
	return (result * sign);
}
