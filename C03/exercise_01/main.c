

#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) {
	int difference = 0;
	unsigned int i = 0;

	while (i < n) {
		difference = s1[i] - s2[i];

		if (difference != 0) {
			return difference;
		}

		if (s1[i] == 0 && s2[i] == 0) {
			return 0;
		}

		i += 1;
	}

	return 0;
}

int main () {
    char str1[] = "Hello world";
    char str2[] = "Hello universe";

    int result = ft_strncmp(str1, str2, 5);
    printf("ft_strncmp(\"%s\", \"%s\", 5) = %d\n", str1, str2, result);

    result = ft_strncmp(str1, str2, 7);
    printf("ft_strncmp(\"%s\", \"%s\", 7) = %d\n", str1, str2, result);

    char s1[] = "hela";
    char s2[] = "helz";
    result = ft_strncmp(s1, s2, 5);
    printf("ft_strncmp(\"%s\", \"%s\", 5) = %d\n", s1, s2, result);

    result = ft_strncmp(s2, s1, 5);
    printf("ft_strncmp(\"%s\", \"%s\", 5) = %d\n", s2, s1, result);

    char s3[] = "hel";
    char s4[] = "helo";
    result = ft_strncmp(s3, s4, 5);
    printf("ft_strncmp(\"%s\", \"%s\", 5) = %d\n", s3, s4, result);

    return 0;
}
