
#include <stdio.h>

int ft_is_prime(int nb) {
	int i = 5;

	if (nb <= 0) {
		return 0;
	}

	if (nb <= 3) {
		return 1;
	}

	if (nb % 2 == 0) {
		return 0;
	}

	while (i < nb) {
		if (nb % i == 0) {
			return 0;
		}

		i += 2;
	}

	return 1;
}

int main () {
    for (int i = 1; i < 50; i += 1) {
        int result = ft_is_prime(i);
        if (result == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
