
#include "libftprintf.h"


int    ft_print_d_i(int nb)
{
	int count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
			return (11);
	}
	if (nb < 0)
	{
		count += ft_print_c('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		count += ft_print_d_i(nb / 10);
	}
	count += ft_print_c(nb % 10 + '0');
	return (count);
}