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

int	is_found(int offset, char *string, char *to_find, int to_find_length)
{
	int	i;
	int	found;

	i = 0;
	found = 1;
	while (i < to_find_length)
	{
		if (string[offset + i] != to_find[i])
		{
			found = 0;
		}
		i += 1;
	}
	return (found);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	found;
	int	to_find_length;

	i = 0;
	found = 0;
	to_find_length = ft_strlen(to_find);
	if (to_find_length == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		found = is_found(i, str, to_find, to_find_length);
		if (found == 1)
		{
			return (&(str[i]));
		}
		i += 1;
	}
	return (0);
}
