#include "ft_printf.h"

void	handle_ulong(t_printf *p)
{
	p->is_signed = false;
	handle_numbers(p);
}