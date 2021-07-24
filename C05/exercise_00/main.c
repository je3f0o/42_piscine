
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main () {
	int n = 5;
	int f = ft_iterative_factorial(n);
	printf("%d! = %d\n", n, f);

	return 0;
}