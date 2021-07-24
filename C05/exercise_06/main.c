
#include <stdio.h>

int ft_is_prime(int nb);

int main () {
    for (int i = 1; i < 20; i += 1) {
        int result = ft_is_prime(i);
		printf("ft_is_prime(%d) = %d\n", i, result);
    }

    return 0;
}
