
#include <stdio.h>

int ft_fibonacci(int index);

int main () {

    for (int i = 0; i < 10; i += 1) {
        int result = ft_fibonacci(i);
        printf("fibonacci(%d) = %d\n", i, result);
    }

    return 0;
}
