int ft_iterative_power(int nb, int power) {
	int i	   = 1;
	int result = nb;

	if (power == 0) {
		return 1;
	}

	if (power < 0) {
		return 0;
	}

	while (i < power) {
		result *= nb;
		i += 1;
	}

	return result;
}
