
#include <string.h>
#include <stdio.h>

char *ft_strncat (char *s1, char *s2, unsigned int nb);

int main () {
    char str1[100] = "Hello";
    char str2[]    = " world";

    puts("Before call 'ft_strncat' funcion.");
    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"\n", str2);

    ft_strncat(str1, str2, 4);

    puts("-------------------------------");
    puts("After call 'ft_strncat(str1, str2, 4)' funcion.");
    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"\n", str2);

    ft_strncat(str1, str2, 10);

    puts("-------------------------------");
    puts("After call 'ft_strncat(str1, str2, 10)' funcion.");
    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"\n", str2);

    return 0;
}
