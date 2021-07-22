
#include <stdio.h>

int ft_strlen(char *str) {
	int index = 0;

	while (str[index] != 0) {
		index += 1;
	}

	return index;
}

void copy(unsigned int offset, unsigned int length, char *dest, char *src) {
	unsigned int i = offset;
	unsigned int j = 0;

	while (i < length) {
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
	unsigned int src_length   = ft_strlen(src);
	unsigned int dest_length  = ft_strlen(dest);
	unsigned int total_length = dest_length + src_length;
	unsigned int max_length;

	if (total_length >= size) {
		max_length     = size - 1;
		dest[size - 1] = 0;
	} else {
		max_length         = total_length;
		dest[total_length] = 0;
	}

	copy(dest_length, max_length, dest, src);

	return total_length;
}

int main () {
    char dest[12] = "Hello";
    char src[]    = " world bla bla bla some nasty hacking codes here.";

    printf("dest = \"%s\".\n", dest);
    printf("src  = \"%s\".\n", src);
    printf("dest size = %lu.\n", sizeof(dest));

    unsigned int new_dest_length = ft_strlcat(dest, src, sizeof(dest));
    puts("-------------------------------");
    puts("After call ft_strlcat(dest, src, sizeof(dest))");
    printf("dest = \"%s\".\n", dest);
    printf("src  = \"%s\".\n", src);
    printf("new dest string length = %d.\n", new_dest_length);

    return 0;
}
