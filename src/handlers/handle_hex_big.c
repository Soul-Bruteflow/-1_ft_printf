#include "ft_printf.h"

void	handle_hex_big(t_printf *p)
{
	handle_bases(p, "0x", 16, true);
}