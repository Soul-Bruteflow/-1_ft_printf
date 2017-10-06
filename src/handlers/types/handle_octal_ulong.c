#include "ft_printf.h"

void	handle_octal_ulong(t_printf *p)
{
	if (p->len == none)
		p->len = l;
	p->base = 8;
	handle_bases(p, "0", 8, false);
}