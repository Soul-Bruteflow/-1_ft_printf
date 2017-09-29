#include "ft_printf.h"

void	handle_string(t_printf *p)
{
	p->count += ft_print(va_arg(p->args, char*));
}