
#include <string.h>
#include <stdio.h>

char * ft_strcat (char *s1, char *s2);

int main () {
    char str1[100] = "Hello";
    char str2[]    = " world";

    puts("Before call 'ft_strcat' funcion.");
    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"\n", str2);

    ft_strcat(str1, str2);
    puts("-------------------------------");
    puts("After call 'ft_strcat' funcion.");
    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"\n", str2);

    return 0;
}
