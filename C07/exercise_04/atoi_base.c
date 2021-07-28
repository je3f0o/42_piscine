int	ft_strlen(char *str);

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

int	convert_number(char ch, char *base, int base_len)
{
	int	i;

	i = 0;
	while (i < base_len)
	{
		if (base[i] == ch)
		{
			return (i);
		}
		i += 1;
	}
	return (-1);
}

int	skip_prefix(char *str, int index, int str_len, int *sign)
{
	while (index < str_len)
	{
		if (str[index] == '-' || str[index] == '+')
		{
			if (str[index] == '-')
			{
				*sign *= -1;
			}
		}
		else if (str[index] > 32)
		{
			return (index);
		}
		index += 1;
	}
	return (index);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	str_len;
	int	base_len;
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	base_len = get_base_len(base);
	if (base_len >= 2)
	{
		str_len = ft_strlen(str);
		i = skip_prefix(str, 0, str_len, &sign);
		while (i < str_len && convert_number(str[i], base, base_len) >= 0)
		{
			res = res * base_len + convert_number(str[i], base, base_len);
			i += 1;
		}
	}
	return (res * sign);
}
