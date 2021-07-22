
#include <stdio.h>

int ft_strlen (char *string) {
    int index = 0;
    while (string[index] != 0) {
        index += 1;
    }
    return index;
}

int main () {
    char str[] = "Hello world";
    int length = ft_strlen(str);

    printf("'%s' string has %d characters.\n", str, length);

    return 0;
}