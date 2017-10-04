#include "ft_printf.h"

void	handle_pointer(t_printf *p)
{
	if (p->len == none)
		p->len = j;
	handle_bases(p, "0x", 16, false);
//	char	*n;
//	size_t	len;
//	char	*prefix;
//	t_bool	is_pref_printed;
//
//	prefix = "0x";
//	is_pref_printed = false;
//	n = ft_basification(va_arg(p->args, uintmax_t), 16, false);
//	len = ft_strlen(n);
//	if (p->got_precision)
//	{
//		p->count += ft_print(prefix, false, 0);
//		is_pref_printed = true;
//		p->count += print_prefix_pad(len, p->precision, '0');
//	}
//	else if (p->got_width && !p->flags.minus && !p->flags.zero)
//		p->count += print_prefix_pad(len + 2, p->width, ' ');
//	else if (p->got_width && p->flags.zero)
//	{
//		p->count += ft_print(prefix, false, 0);
//		is_pref_printed = true;
//		p->count += print_prefix_pad(len + 2, p->width, '0');
//	}
//	if (!is_pref_printed)
//		p->count += ft_print(prefix, false, 0);
//	p->count += ft_print(n, false, 0);
//	if (p->got_width && p->flags.minus)
//		p->count += print_prefix_pad(len + 2, p->width, ' ');
}