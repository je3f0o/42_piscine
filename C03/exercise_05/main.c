
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main () {
    char dest[12] = "Hello";
    char src[]    = " world bla bla bla some nasty hacking codes here.";

    printf("dest = \"%s\".\n", dest);
    printf("src  = \"%s\".\n", src);
    printf("dest size = %lu.\n", sizeof(dest));

    unsigned int new_dest_length = ft_strlcat(dest, src, sizeof(dest));
    puts("-------------------------------");
    puts("After call ft_strlcat(dest, src, sizeof(dest))");
    printf("dest = \"%s\".\n", dest);
    printf("src  = \"%s\".\n", src);
    printf("new dest string length = %d.\n", new_dest_length);

    return 0;
}
