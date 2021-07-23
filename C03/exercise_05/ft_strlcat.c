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

void	copy(unsigned int offset, unsigned int length, char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = offset;
	j = 0;
	while (i < length)
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_length;
	unsigned int	dest_length;
	unsigned int	total_length;
	unsigned int	max_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	total_length = dest_length + src_length;
	if (total_length >= size)
	{
		max_length = size - 1;
		dest[size - 1] = 0;
	}
	else
	{
		max_length = total_length;
		dest[total_length] = 0;
	}
	copy(dest_length, max_length, dest, src);
	return (total_length);
}
