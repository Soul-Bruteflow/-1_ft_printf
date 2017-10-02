#include "ft_printf.h"

void	handle_ulong(t_printf *p)
{
	if (p->len == none)
		p->len = l;
	p->is_signed = false;
	handle_numbers(p);
}