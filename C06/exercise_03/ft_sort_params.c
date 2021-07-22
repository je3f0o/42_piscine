#include <unistd.h>

int ft_strlen(char *str) {
	int index = 0;

	while (str[index] != 0) {
		index += 1;
	}

	return index;
}

int ft_strcmp(char *s1, char *s2) {
	int i		   = 0;
	int difference = s1[i] - s2[i];

	while ((difference == 0) && (s1[i] != 0)) {
		difference = s1[i] - s2[i];
		i += 1;
	}

	return difference;
}

void ft_putstr(char *str) {
	int len = ft_strlen(str);
	char ch = '\n';

	write(1, str, len);
	write(1, &ch, 1);
}

void sort_strings(char **strings, int len) {
	int i		   = 1;
	int j		   = 0;
	int difference = 0;
	char *temp	   = 0;

	while (i < len) {
		j = 1;

		while (j < len) {
			difference = ft_strcmp(strings[i], strings[j]);

			if (difference < 0) {
				temp	   = strings[i];
				strings[i] = strings[j];
				strings[j] = temp;
			}

			j += 1;
		}

		i += 1;
	}
}

int main(int argc, char **argv) {
	int i = 1;

	sort_strings(argv, argc);

	while (i < argc) {
		ft_putstr(argv[i]);
		i += 1;
	}

	return 0;
}
