#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i += 1;
	}
	return (i);
}

int	has_dup(char *base, int i, int len)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if (i != j && base[i] == base[j])
		{
			return (1);
		}
		j += 1;
	}
	return (0);
}

int	get_base_len(char *base)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(base);
	if (len < 1)
	{
		return (-1);
	}
	while (i < len)
	{
		if (has_dup(base, i, len) != 0)
		{
			return (-1);
		}
		if (base[i] == '-' || base[i] == '+')
		{
			return (-1);
		}
		i += 1;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char*base)
{
	char	str[20];
	int		i;
	int		base_len;

	base_len = get_base_len(base);
	if (base_len >= 2)
	{
		i = 0;
		while (i < 20 && nbr != 0)
		{
			str[i] = base[nbr % base_len];
			nbr /= base_len;
			i += 1;
		}
		i -= 1;
		while (i >= 0)
		{
			write(1, &str[i], 1);
			i -= 1;
		}
	}
}
