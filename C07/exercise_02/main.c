
#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main() {
	int min = 10;
	int max = 20;
	int len = max - min;
	int *range = 0;

	int size = ft_ultimate_range(&range, min, max);
	printf("min = %d\n", min);
	printf("max = %d\n", max);
	printf("len = %d\n", len);
	printf("size = %d\n", size);
	printf("range = %p\n", range);
	if (range == 0) {
		perror("range not initied.n");
		return -1;
	}

	for (int i = 0; i < len; i += 1) {
		printf("%d: %d\n", i, range[i]);
	}
	free(range);
	puts("done.");

	return 0;
}
