#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	get_base_len(char *base);

char	*convert_to(int num, int len, char *base, int base_len)
{
	int		i;
	int		sign;
	char	*ptr;

	ptr = (char *)malloc(len);
	i = len - 1;
	ptr[i] = 0;
	sign = 1;
	if (num < 0)
	{
		sign = -1;
	}
	while ((i >= 0 && sign == 1) || (i > 0 && sign == -1))
	{
		ptr[i] = base[((num % base_len) * sign)];
		num /= base_len;
		i -= 1;
	}
	if (sign < 0)
	{
		ptr[0] = '-';
	}
	return (ptr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		len;
	int		div;
	int		base_to_len;

	num = ft_atoi_base(nbr, base_from);
	len = 1;
	div = num;
	base_to_len = get_base_len(base_to);
	while (div != 0)
	{
		div = div / base_to_len;
		len += 1;
	}
	if (num < 0)
	{
		len += 1;
	}
	return (convert_to(num, len, base_to, base_to_len));
}
