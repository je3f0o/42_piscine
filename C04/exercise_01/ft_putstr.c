#include <unistd.h>

int ft_strlen(char *str) {
	int index = 0;

	while (str[index] != 0) {
		index += 1;
	}

	return index;
}

void ft_putstr(char *str) {
	int len = ft_strlen(str);
	write(1, str, len);
}
