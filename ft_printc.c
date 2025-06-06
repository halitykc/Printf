

#include "libftprintf.h"

int ft_print_c(char c)
{
    write(1, &c, 1);
    return (1);
}