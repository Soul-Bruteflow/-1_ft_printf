#include "ft_printf.h"

void	handle_string_w(t_printf *p)
{
	p->count += ft_putwstr(va_arg(p->args, wchar_t*));
}