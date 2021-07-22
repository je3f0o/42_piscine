int ft_is_prime(int nb) {
	int i = 5;

	if (nb <= 0) {
		return 0;
	}

	if (nb <= 3) {
		return 1;
	}

	if (nb % 2 == 0) {
		return 0;
	}

	while (i < nb) {
		if (nb % i == 0) {
			return 0;
		}

		i += 2;
	}

	return 1;
}

int ft_find_next_prime(int nb) {
	int n = nb + 1;

	while (ft_is_prime(n) == 0) {
		n += 1;
	}

	return n;
}
