#include "ft_printf.h"

void	handle_octal_ulong(t_printf *p)
{
	p->count += ft_print(ft_basification(va_arg(p->args, unsigned long), 8, false));
}