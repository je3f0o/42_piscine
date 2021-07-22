#include <unistd.h>

int ft_strlen(char *str) {
	int index = 0;

	while (str[index] != 0) {
		index += 1;
	}

	return index;
}

int main(int argc, char **argv) {
	char ch = '\n';

	argc = 0;
	write(1, argv[0], ft_strlen(argv[0]));
	write(1, &ch, 1);

	return 0;
}