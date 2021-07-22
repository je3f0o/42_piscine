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
