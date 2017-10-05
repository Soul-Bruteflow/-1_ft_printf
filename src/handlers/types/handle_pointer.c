#include "ft_printf.h"

void	handle_pointer(t_printf *p)
{
	char	    *n;
	size_t	    len;
	char	    *prefix;
	t_bool	    is_pref_printed;
	uintmax_t   nbr;

	prefix = "0x";
	is_pref_printed = false;
	nbr = va_arg(p->args, uintmax_t);
	n = ft_basification(nbr, 16, false);
	len = ft_strlen(n);
	if (p->got_precision && p->got_width && !p->flags.minus)
	{
		ssize_t dif = p->precision - len;
		handle_case_one(p, dif, len, prefix);
		is_pref_printed = true;
	}
	else if (p->got_precision && !p->flags.minus)
	{
		p->count += ft_print(prefix, false, 0);
		is_pref_printed = true;
		p->count += print_prefix_pad(len, p->precision, '0');
	}
	else if (p->got_width && !p->flags.minus && !p->flags.zero)
		p->count += print_prefix_pad(len + 2, p->width, ' ');
	else if (p->got_width && p->flags.zero)
	{
		p->count += ft_print(prefix, false, 0);
		is_pref_printed = true;
		p->count += print_prefix_pad(len + 2, p->width, '0');
	}
	if (!is_pref_printed)
		p->count += ft_print(prefix, false, 0);
	if (!(nbr == 0 && p->precision == 0 && p->width == 0))
		p->count += ft_print(n, false, 0);
	if (p->got_width && p->flags.minus)
		p->count += print_prefix_pad(len + 2, p->width, ' ');
//	handle_bases(p, "0x", 16, false);
}