#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		len;
	int		*array;

	len = max - min;
	size = len * sizeof(int);
	array = (int *)malloc(size);
	if (array != 0)
	{
		i = 0;
		while (i < len)
		{
			array[i] = min + i;
			i += 1;
		}
		return (array);
	}
	return (0);
}
