#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main()
{
    char base_hex[] = "0123456789ABCDEF";
    char base_decimal[] = "0123456789";
    char base_binary[] = "01";
    char base_octal[] = "01234567";

    char base_invalid_empty[] = "p";
    char base_invalid_plus[] = "p+";
    char base_invalid_minus[] = "p-";
    char base_invalid_dup[] = "powep";

	char num_str[] = "1011";
	char wrong_input[] = "101121";

	int n = ft_atoi_base(num_str, base_hex);
	printf("hex n = %d\n", n);
	n = ft_atoi_base(num_str, base_decimal);
	printf("dec n = %d\n", n);
	n = ft_atoi_base(num_str, base_binary);
	printf("bin n = %d\n", n);
	n = ft_atoi_base(num_str, base_octal);
	printf("oct n = %d\n", n);

	n = ft_atoi_base(num_str, base_invalid_empty);
	printf("empty n = %d\n", n);
	n = ft_atoi_base(num_str, base_invalid_plus);
	printf("plus n = %d\n", n);
	n = ft_atoi_base(num_str, base_invalid_minus);
	printf("minus n = %d\n", n);
	n = ft_atoi_base(num_str, base_invalid_dup);
	printf("dup n = %d\n", n);
	n = ft_atoi_base(wrong_input, base_binary);
	printf("wrong n = %d\n", n);

	return (0);
}
