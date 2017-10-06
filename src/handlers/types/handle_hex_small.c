#include "ft_printf.h"

void	handle_hex_small(t_printf *p)
{
	p->base = 16;
	handle_bases(p, "0x", 16, false);
}