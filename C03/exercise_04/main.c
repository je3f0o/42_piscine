
#include <stdio.h>

int ft_strlen(char *str) {
	int index = 0;

	while (str[index] != 0) {
		index += 1;
	}

	return index;
}

int is_found(int offset, char *string, char *to_find, int to_find_length) {
	int i     = 0;
	int found = 1;

	while (i < to_find_length) {
		if (string[offset + i] != to_find[i]) {
			found = 0;
		}

		i += 1;
	}

	return found;
}

char *ft_strstr(char *str, char *to_find) {
	int i              = 0;
	int found          = 0;
	int to_find_length = ft_strlen(to_find);

	if (to_find_length == 0) {
		return str;
	}

	while (str[i] != 0) {
		found = is_found(i, str, to_find, to_find_length);

		if (found == 1) {
			return &(str[i]);
		}

		i += 1;
	}

	return 0;
}

int main () {
    char haystack[] = "This is a simple string.";
    char needle[]   = "simple";

    printf("haystack = \"%s\".\n", haystack);
    printf("needle   = \"%s\".\n", needle);
    puts("-------------------------------");

    char * p = ft_strstr(haystack, needle);
    if (p == NULL) {
        printf("Cannot find string \"%s\" from \"%s\".\n", needle, haystack);
    } else {
        printf("Found \"%s\" at \"%s\".\n", needle, p);
    }

    return 0;
}
