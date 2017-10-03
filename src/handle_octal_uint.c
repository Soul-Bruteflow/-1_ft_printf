#include "ft_printf.h"

void	handle_octal_uint(t_printf *p)
{
	handle_bases(p, "0", 8, false);
}