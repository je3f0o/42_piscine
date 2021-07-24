
#include <stdio.h>

int ft_sqrt(int nb);

int main() {
	int n = 16;
	int result = ft_sqrt(n);

	printf("sqrt(%d) = %d\n", n, result);

	n = 11;
	result = ft_sqrt(n);
	printf("sqrt(%d) = %d\n", n, result);

	return 0;
}
