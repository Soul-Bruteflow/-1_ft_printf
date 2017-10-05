#include "ft_printf.h"

void	handle_percent(t_printf *p)
{
	if (p->got_width && !p->flags.minus)
		p->count += print_prefix_pad(1, p->width,
		(char)(p->flags.zero ? '0' : ' '));
	p->count += ft_print("%", false, 0);
	if (p->got_width && p->flags.minus)
		p->count += print_prefix_pad(1, p->width, ' ');
}