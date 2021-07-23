#include <unistd.h>
#include <stdio.h>

void    ft_putnbr_base(int nbr, char*base);

int main() {
    char base_hex[] = "0123456789ABCDEF";
    char base_decimal[] = "0123456789";
    char base_binary[] = "01";
    char base_octal[] = "poneyvif";
    char base_invalid_empty[] = "p";
    char base_invalid_dup[] = "powep";
    char ch = '\n';
    int n = 123123;

    printf("n = %d\n", n);

    ft_putnbr_base(n, base_hex);
    write(1, &ch, 1);
    ft_putnbr_base(n, base_decimal);
    write(1, &ch, 1);
    ft_putnbr_base(n, base_binary);
    write(1, &ch, 1);
    ft_putnbr_base(n, base_octal);
    write(1, &ch, 1);
    ft_putnbr_base(n, base_invalid_empty);
    write(1, &ch, 1);
    ft_putnbr_base(n, base_invalid_dup);
    write(1, &ch, 1);

    return 0;
}