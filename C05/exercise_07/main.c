#include <stdio.h>

int ft_find_next_prime(int nb);

int main() {
	int n          = 10000;
	int next_prime = ft_find_next_prime(n);

	printf("Next prime number greather than %d is %d\n", n, next_prime);

	return 0;
}
