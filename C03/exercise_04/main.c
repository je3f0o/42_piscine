
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main () {
    char haystack[] = "This is a simple string.";
    char needle[]   = "simple";

    printf("haystack = \"%s\".\n", haystack);
    printf("needle   = \"%s\".\n", needle);
    puts("-------------------------------");

    char * p = ft_strstr(haystack, needle);
    if (p == NULL) {
        printf("Cannot find string \"%s\" from \"%s\".\n", needle, haystack);
    } else {
        printf("Found \"%s\" at \"%s\".\n", needle, p);
    }

    return 0;
}
