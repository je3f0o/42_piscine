#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	str[20];
	int		i;

	i = 0;
	while (i < 20 && nb != 0)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i += 1;
	}
	i -= 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i -= 1;
	}
}
