#include "ft_printf.h"

void	handle_pointer(t_printf *p)
{
	p->count += (ft_print(uitoh(va_arg(p->args, uintmax_t), true, false)));
}