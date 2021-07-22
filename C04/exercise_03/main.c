
#include <stdio.h>

void handle_sign(char ch, int *sign) {
	if (ch == '-') {
		*sign *= -1;
	}
}

int handle(char ch, int old_value, int *sign, int *is_finished) {
	if (*is_finished == 1) {
		return old_value;
	}

	if (ch <= 32) {
		return 0;
	}

	if (ch == '-' || ch == '+') {
		handle_sign(ch, sign);
		return old_value;
	}

	if (ch >= '0' && ch <= '9') {
		return old_value * 10 + (ch - '0');
	}

	*is_finished = 1;

	return old_value;
}

int ft_atoi(char *str) {
	int i           = 0;
	int result      = 0;
	int sign        = 1;
	int is_finished = 0;

	while (str[i] != 0) {
		result = handle(str[i], result, &sign, &is_finished);
		i += 1;
	}

	return result * sign;
}

int main () {
    char str[] = "      ----+---+1234ab4123";
    int i = ft_atoi(str);
    printf("input string = \"%s\".\n", str);
    printf("i = %d\n", i);

    return 0;
}
