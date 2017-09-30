#include "ft_printf.h"

void	handle_int(t_printf *p)
{
	p->count += ft_print(ft_itoa(va_arg(p->args, int)), false, 0);
}