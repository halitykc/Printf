

#include "libftprintf.h"

static int    ft_print_adr_upperx(unsigned long adr)
{
    int	count;

	count = 0;
    char *s = "0123456789ABCDEF";
    if (adr > 16)
        count += ft_print_adr_upperx(adr / 16);
    count += ft_print_c((s[adr % 16]));
	return (count);
}

int	ft_print_upperx(unsigned long adr)
{
	int count;

	count = 0;
	count += ft_print_adr_upperx(adr);
	return (count);
}