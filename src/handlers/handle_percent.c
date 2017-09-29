#include "ft_printf.h"

void	handle_percent(t_printf *p)
{
	p->count += ft_print("%");
}