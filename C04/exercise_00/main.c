
#include <stdio.h>

int ft_strlen(char *str);

int main () {
    char str[] = "Hello world";

    int length = ft_strlen(str);
    printf("String \"%s\" has %d characters.\n", str, length);

    return 0;
}