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

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*buffer;

	len = ft_strlen(src);
	buffer = (char *) malloc(len + 1);
	if (buffer != 0)
	{
		i = 0;
		while (i < len)
		{
			buffer[i] = src[i];
			i += 1;
		}
		buffer[i] = 0;
		return (buffer);
	}
	return (0);
}
