#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void ft_putnbr(int i) {
    printf("%d\n", i);
}

int main() {
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length  = sizeof(array) / sizeof(array[0]);

    ft_foreach(array, length, &ft_putnbr);

    return 0;
}