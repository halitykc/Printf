
#include "libftprintf.h"

static int    ft_print_adr_x(unsigned long adr)
{
    int	count;

	count = 0;
    char *s = "0123456789abcdef";
    if (adr > 16)
        count += ft_print_adr_x(adr / 16);
    count += ft_print_c((s[adr % 16]));
	return (count);
}


int	ft_print_x(unsigned long adr)
{
	int count;

	count = 0;
	count += ft_print_adr_x(adr);
	return (count);
}