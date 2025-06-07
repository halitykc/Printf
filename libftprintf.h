

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int ft_print_s(char *str);
int	ft_print_c(char c);
int	ft_print_p(unsigned long adr);
int ft_print_d_i(int nb);
int ft_print_u(unsigned long nb);
int ft_print_x(unsigned long int ptr);
int	ft_print_upperx(unsigned long adr);

#endif