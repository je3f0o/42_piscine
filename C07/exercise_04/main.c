
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
    char	nbr[]          = "      ----+---+1234ab4321";
    char	base_decimal[] = "0123456789";
    char	base_binary[]  = "01";
	
	char *str = ft_convert_base(nbr, base_decimal, base_binary);
	printf("convert input string  = \"%s\" base 10 to base 2\n", nbr);
	printf("convert output string = \"%s\"\n", str);

	return (0);
}
