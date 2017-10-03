#include "ft_printf.h"

void	handle_char(t_printf *p)
{
	if (p->len == l)
		return (handle_char_w(p));
	else
	{
		if (p->got_width && !p->flags.minus)
			p->count += print_prefix_pad(1, p->width, (char)(p->flags.zero ? '0' : ' '));
		ft_putchar(va_arg(p->args, int));
		p->count += 1;
		if (p->got_width && p->flags.minus)
			p->count += print_prefix_pad(1, p->width, ' ');
	}
}