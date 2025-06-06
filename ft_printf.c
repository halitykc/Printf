

#include "libftprintf.h"

static int	format_type(int spe, va_list ap)
{
	int	count;

	count = 0;
	if (spe  == 's')
		count += ft_print_s(va_arg(ap, char *));
	else if (spe == 'i' || spe == 'd')
		count += ft_print_d_i(va_arg(ap, int));
	else if (spe == 'c')
		count += ft_print_c(va_arg(ap, int));   
	else if (spe == '%')
		count += ft_print_c('%');
	else if (spe == 'p')
		count += ft_print_p((unsigned long int) va_arg(ap,void *));
	else if (spe == 'u')
		count += ft_print_u((unsigned int)va_arg(ap,int));
	else if (spe == 'x')
		count += ft_print_x((unsigned int)va_arg(ap, int));
	else if (spe == 'X')
		count += ft_print_upperx((unsigned int)va_arg(ap, int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int i;
	int count;

	count = 0;
	i = -1;
	va_start(ap, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
			count += format_type(format[++i],ap);
		else
		{
			ft_print_c(*(format + i));
			count ++;
		}
	}
	va_end(ap);
	return count;
}



#include <stdio.h>
int main(void)
{
	// char c = 'a';
	// char *str = "yakici";
	int i = 4294967295;
	int a,b;
	a = ft_printf("mine %u halit\n",i);
	b = printf("orgn %u halit\n",i);

	printf("%i, %i\n",a ,b);

	printf("%X\n", 255);
	ft_printf("%X", 255);

    return 0;
}