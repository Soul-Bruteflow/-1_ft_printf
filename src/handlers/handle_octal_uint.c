#include "ft_printf.h"

void	handle_octal_uint(t_printf *p)
{
	p->count += ft_print(ft_basification(va_arg(p->args, unsigned int), 8, false));
}