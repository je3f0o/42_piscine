#include <stdlib.h>

void	initialize_range(int **range, int len, int min)
{
	int	i;
	int	*vals;

	i = 0;
	vals = *range;
	while (i < len)
	{
		vals[i] = i + min;
		i += 1;
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int		len;
	int		size;

	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	size = sizeof(int) * len;
	*range = (int *)malloc(size);
	if (*range == 0)
	{
		*range = NULL;
		return (-1);
	}
	initialize_range(range, len, min);
	return (size);
}
