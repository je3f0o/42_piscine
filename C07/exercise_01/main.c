
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main (){
    int min   = 10;
    int max   = 20;
    int delta = max - min;

    int * array = ft_range(min, max);
    if (array != NULL) {
        for (int i = 0; i < delta; i += 1) {
            printf("%d: %d\n", i, array[i]);
        }
        free(array);
    } else {
        perror("Failed to allocate memory.");
    }

    return 0;
}
