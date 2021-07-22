
#include <stdio.h>
#include <stdlib.h>
#include "ft_strjoin.h"

int main () {
    char word1[] = "hello";
    char word2[] = "world";
    char word3[] = "and";
    char word4[] = "more";

    char * strings[] = { word1, word2, word3, word4 };
    int length = sizeof(strings) / sizeof(strings[0]);

    char sep[] = "-+-+-";
    char *result = ft_strjoin(length, strings, sep);

    if (result != NULL) {
        for (int i = 0; i < length; i += 1) {
            printf("%d: %s\n", i, strings[i]);
        }
        puts("----------------------------");
        puts(result);
    } else {
        perror("Failed to concatenate strings.");
    }

    free(result);

    return 0;
}
