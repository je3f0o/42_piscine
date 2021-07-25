#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		delta;
	int		*array;
	void	*pointer;

	delta = max - min;
	size = delta * sizeof(int);
	pointer = malloc(size);
	if (pointer != 0)
	{
		i = 0;
		array = (int *)pointer;
		while (i < delta)
		{
			array[i] = min + i;
			i += 1;
		}
		return (array);
	}
	return (0);
}
