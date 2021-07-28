#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str);

void	ft_putstr(char *str)
{
	int		len;
	char	nl;

	nl = '\n';
	len = ft_strlen(str);
	write(1, str, len);
	write(1, &nl, 1);
}

char	*slice(char *buffer, int offset, int len)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = offset;
	ptr = (char *)malloc(len + 1);
	while (i < len)
	{
		ptr[i] = buffer[j];
		i += 1;
		j += 1;
	}
	ptr[len] = 0;
	return (ptr);
}

void	alloc_string_array(char ***ptr)
{
	char	buffer[20];
	char	**str_array;

	buffer[0] = 'a';
	buffer[1] = 'b';
	buffer[2] = 'c';
	buffer[3] = 'd';
	buffer[4] = 'e';
	buffer[5] = 'f';
	buffer[6] = 'g';
	buffer[7] = 'k';
	*ptr = (char **)malloc(sizeof(char *) * 4);
	str_array = *ptr;
	str_array[0] = slice(buffer, 0, 2);
	str_array[1] = slice(buffer, 2, 2);
	str_array[2] = slice(buffer, 4, 2);
	str_array[3] = slice(buffer, 6, 2);
}

void	print_sep(char *sep)
{
	char	buffer[20];

	buffer[0] = 's';
	buffer[1] = 'e';
	buffer[2] = 'p';
	buffer[3] = ' ';
	buffer[4] = '=';
	buffer[5] = ' ';
	buffer[6] = '\'';
	buffer[7] = sep[0];
	buffer[8] = sep[1];
	buffer[9] = sep[2];
	buffer[10] = sep[3];
	buffer[11] = sep[4];
	buffer[12] = '\'';
	buffer[13] = 0;
	ft_putstr(buffer);
}

void	init_sep_and_print(char **sep)
{
	char	*sep_str;

	*sep = (char *)malloc(6);
	sep_str = *sep;
	sep_str[0] = '-';
	sep_str[1] = '+';
	sep_str[2] = '-';
	sep_str[3] = '+';
	sep_str[4] = '-';
	sep_str[5] = 0;
	print_sep(sep_str);
}
