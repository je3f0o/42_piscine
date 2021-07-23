int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i += 1;
	}
	return (i);
}

int	has_dup(char *base, int i, int len)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if (i != j && base[i] == base[j])
		{
			return (1);
		}
		j += 1;
	}
	return (0);
}

int	get_base_len(char *base)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(base);
	if (len < 1)
	{
		return (-1);
	}
	while (i < len)
	{
		if (has_dup(base, i, len) != 0)
		{
			return (-1);
		}
		if (base[i] == '-' || base[i] == '+')
		{
			return (-1);
		}
		i += 1;
	}
	return (len);
}

int	convert_number(int old_value, char ch, char *base, int base_len)
{
	int	i;

	i = 0;
	while (i < base_len)
	{
		if (base[i] == ch)
		{
			return (old_value + i);
		}
		i += 1;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	str_len;
	int	base_len;
	int	result;

	result = 0;
	base_len = get_base_len(base);
	if (base_len >= 2)
	{
		i = 0;
		str_len = ft_strlen(str);
		while (i < str_len)
		{
			result *= base_len;
			result = convert_number(result, str[i], base, base_len);
			if (result < 0)
			{
				return (0);
			}
			i += 1;
		}
	}
	return (result);
}
