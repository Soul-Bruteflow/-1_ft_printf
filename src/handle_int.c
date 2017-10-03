#include "ft_printf.h"

void	handle_int(t_printf *p)
{
	p->is_signed = true;
	handle_numbers(p);
}