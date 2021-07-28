#include <stdlib.h>

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

int	calculate_buffer_size(int size, char **strs, char *sep)
{
	int	i;
	int	strings_size;
	int	seperator_length;
	int	seperator_size;

	i = 0;
	strings_size = 0;
	seperator_length = ft_strlen(sep);
	seperator_size = (size - 1) * seperator_length;
	if (size == 0)
	{
		return (0);
	}
	while (i < size)
	{
		strings_size += ft_strlen(strs[i]);
		i += 1;
	}
	return (strings_size + seperator_size + 1);
}

unsigned int	append(char *dest, int offset, char *src)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = offset;
	len = ft_strlen(src);
	while (j < len)
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		offset_index;
	char	*buffer;

	offset_index = 0;
	buffer = (char *)malloc(calculate_buffer_size(size, strs, sep));
	if (buffer != 0 && size > 0)
	{
		offset_index += append(buffer, 0, strs[0]);
		i = 1;
		while (i < size)
		{
			offset_index += append(buffer, offset_index, sep);
			offset_index += append(buffer, offset_index, strs[i]);
			i += 1;
		}
	}
	return (buffer);
}
