
#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2) {
	int i          = 0;
	int difference = s1[i] - s2[i];

	while ((difference == 0) && (s1[i] != 0)) {
		difference = s1[i] - s2[i];
		i += 1;
	}

	return difference;
}

int main () {
    char str1[] = "Hella world";
    char str2[] = "Hellz world";

    printf("ft_strcmp(\"%s\", \"%s\") = %d\n", str1, str2, ft_strcmp(str1, str2));

    char s1[] = "a";
    char s2[] = "z";
    printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s2, ft_strcmp(s1, s2));
    printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s2, s1, ft_strcmp(s2, s1));

    return 0;
}