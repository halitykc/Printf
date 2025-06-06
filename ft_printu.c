
#include "libftprintf.h"

int    ft_print_u(unsigned long nb)
{
	int count;

	count = 0;
	if (nb > 9)
	{
		count += ft_print_u(nb / 10);
	}
	count += ft_print_c(nb % 10 + '0');
	return (count);
}