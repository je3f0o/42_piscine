
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main () {
    char str[] = "Hello world";
    char *clone = ft_strdup(str);

    if (clone != NULL) {
        puts("Successfully copied.");
        puts(clone);
        free(clone);
        puts("Freed after using 'ft_strdup(char *str)'");
    } else {
        perror("Failed to copy string.");
    }

    return 0;
}
