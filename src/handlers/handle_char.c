#include "ft_printf.h"

void	handle_char(t_printf *p)
{
	ft_putchar(va_arg(p->args, char));
	p->count += 1;
}