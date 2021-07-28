#include <unistd.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	alloc_string_array(char ***ptr);
char	init_sep_and_print(char **sep);

void	print_line(void)
{
	int		i;
	char	ch;
	char	nl;

	i = 0;
	ch = '-';
	nl = '\n';
	while (i < 30)
	{
		write(1, &ch, 1);
		i += 1;
	}
	write(1, &nl, 1);
}

void	print_array_element(int index, char *str)
{
	char	index_number[3];
	char	space[2];
	char	*joined_string;
	char	**strings;

	index_number[0] = index + '0';
	index_number[1] = ':';
	index_number[2] = 0;
	space[0] = ' ';
	space[1] = 0;
	strings = (char **)malloc(sizeof(char *) * 2);
	strings[0] = index_number;
	strings[1] = str;
	joined_string = ft_strjoin(2, strings, space);
	ft_putstr(joined_string);
}

int	main(void)
{
	int		i;
	char	*sep;
	char	*result;
	char	**strings;

	print_line();
	init_sep_and_print(&sep);
	alloc_string_array(&strings);
	result = ft_strjoin(4, strings, sep);
	i = 0;
	while (i < 4)
	{
		print_array_element(i, strings[i]);
		i += 1;
	}
	print_line();
	ft_putstr(result);
	free(result);
	return (0);
}
