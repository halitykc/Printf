

#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_c(char c);
int	ft_print_p(unsigned long adr);
int ft_print_s(char *str);
int ft_print_d_i(int nb);
int ft_print_u(unsigned long nb);

#endif