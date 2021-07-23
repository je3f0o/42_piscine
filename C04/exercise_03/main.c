
#include <stdio.h>

int ft_atoi(char *str);

int main () {
    char str[] = "      ----+---+1234ab4123";
    int i = ft_atoi(str);
    printf("input string = \"%s\".\n", str);
    printf("i = %d\n", i);

    return 0;
}
