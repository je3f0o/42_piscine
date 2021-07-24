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
	char	ch;

	ch = '\n';
	argc = 0;
	write(1, argv[0], ft_strlen(argv[0]));
	write(1, &ch, 1);
	return (0);
}
