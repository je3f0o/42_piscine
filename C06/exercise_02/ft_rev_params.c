#include <unistd.h>

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

int	main(int argc, char **argv)
{
	int		i;
	char	nl;

	i = argc - 1;
	nl = '\n';
	while (i > 0)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, &nl, 1);
		i -= 1;
	}
	return (0);
}
