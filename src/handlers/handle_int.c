#include "ft_printf.h"

void	handle_int(t_printf *p)
{
	intmax_t	nbr;
	char		*prefix;
	char 		*n;
	size_t		len;
	ssize_t		dif;

	if (p->got_precision)
		p->flags.zero = false;
	nbr = get_number_by_len(p);
	prefix = "";
	if (nbr < 0 || p->flags.plus || p->flags.space)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			prefix = "-";
		}
		else if (p->flags.plus)
			prefix = "+";
		else if (p->flags.space)
			prefix = " ";
	}
	n = ft_itoa_positive(nbr);
	len = ft_strlen(n);
	dif = p->precision - len;
	if (p->got_width && p->got_precision && !p->flags.minus)
	{

		if (dif > 0)
			p->count += print_prefix_pad(len, (unsigned int)(p->width - dif -1), ' ');
		else
			p->count += print_prefix_pad(len, p->width - 1, ' ');
		p->count += ft_print(prefix, false, 0);
		p->count += print_prefix_pad(len, p->precision, '0');
	}
	else if (p->got_precision && !p->flags.minus)
	{
		p->count += ft_print(prefix, false, 0);
		p->count += print_prefix_pad(len, p->precision, '0');
	}
	else if (p->got_width && !p->flags.minus)
	{
		p->count += ft_print(prefix, false, 0);
		p->count += print_prefix_pad(len, p->width - 1, p->flags.zero ? (char)'0' : (char)' ');
	}
	if (p->flags.minus)
	{
		p->count += ft_print(prefix, false, 0);
		if (p->got_precision)
			p->count += print_prefix_pad(len, p->precision, '0');
	}
	p->count += ft_print(n, false, 0);
	if (p->got_width && p->flags.minus)
	{
		if (dif > 0)
			p->count += print_prefix_pad(len, (unsigned int)(p->width - dif - 1), ' ');
		else
			p->count += print_prefix_pad(len, p->width - 1, ' ');
	}
}