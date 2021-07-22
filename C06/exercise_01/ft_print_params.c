#include <unistd.h>

int ft_strlen(char *str) {
	int index = 0;

	while (str[index] != 0) {
		index += 1;
	}

	return index;
}

int main(int argc, char **argv) {
	int i	= 1;
	char nl = '\n';

	while (i < argc) {
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, &nl, 1);
		i += 1;
	}

	return 0;
}
