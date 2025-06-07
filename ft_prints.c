

#include "libftprintf.h"

int ft_print_s(char *str)
{
    int i;
    if (!str)
        return (ft_print_s("(null)"));
    
    i = 0;
    while (str[i] != '\0')
        write(1, &str[i++], 1);
    return (i);
}