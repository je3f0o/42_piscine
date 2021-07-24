
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main () {
    int n = 2;
    int p = 8;
    int result = ft_recursive_power(n, p);
    printf("pow(%d, %d) = %d\n", n, p, result);

    return 0;
}
