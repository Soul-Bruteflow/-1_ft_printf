#include "ft_printf.h"

void	handle_int_long(t_printf *p)
{
	if (p->len == none)
		p->len = l;
	p->is_signed = true;
	handle_numbers(p);
}