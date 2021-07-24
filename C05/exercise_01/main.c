
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main () {
    int n = 5;
    int f = ft_recursive_factorial(n);
    printf("%d! = %d\n", n, f);

    return 0;
}
