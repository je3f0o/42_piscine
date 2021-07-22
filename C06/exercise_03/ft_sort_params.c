#include <unistd.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	difference;

	i = 0;
	difference = s1[i] - s2[i];
	while ((difference == 0) && (s1[i] != 0))
	{
		difference = s1[i] - s2[i];
		i += 1;
	}
	return (difference);
}

void	swap_pointers(char **ptrs, int a, int b)
{
	char	*str_ptr;

	str_ptr = ptrs[a];
	ptrs[a] = ptrs[b];
	ptrs[b] = str_ptr;
}

void	sort_strings(char **strings, int len)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 0;
	temp = 0;
	while (i < len)
	{
		j = 1;
		while (j < len)
		{
			if (ft_strcmp(strings[i], strings[j]) < 0)
			{
				swap_pointers(strings, i, j);
			}
			j += 1;
		}
		i += 1;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		len;
	char	ch;

	i = 1;
	ch = '\n';
	sort_strings(argv, argc);
	while (i < argc)
	{
		len = ft_strlen(argv[i]);
		write(1, argv[i], len);
		write(1, &ch, 1);
		i += 1;
	}
	return (0);
}
