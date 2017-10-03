#include "ft_printf.h"

static void	handle_prefix(t_printf *p, uintmax_t *n, char **pref)
{
	intmax_t	nbr;

	nbr = get_number_by_len(p);
	if (nbr < 0 || p->flags.plus || p->flags.space)
	{
		if (nbr < 0)
		{
			*n = (uintmax_t)nbr * -1;
			*pref = "-";
		}
		else if (p->flags.plus)
			*pref = "+";
		else if (p->flags.space)
			*pref = " ";
	}
}

static void	handle_pad_int(t_printf *p, ssize_t dif, size_t len, char *pref)
{
	if (p->got_width && p->got_precision && !p->flags.minus)
		handle_case_one(p, dif, len, pref);
	else if (p->got_precision && !p->flags.minus)
		handle_case_two(p, len, pref);
	else if (p->got_width && !p->flags.minus)
		handle_case_three(p, len, pref);
	if (p->flags.minus)
		handle_case_four(p, len, pref);
}

void		handle_numbers(t_printf *p)
{
	uintmax_t	nbr;
	char		*prefix;
	char 		*n;
	size_t		len;
	ssize_t		dif;

	prefix = "";
	if (p->got_precision)
		p->flags.zero = false;
	if(p->is_signed)
		handle_prefix(p, &nbr, &prefix);
	else
		nbr = get_number_by_len_unsigned(p);
	n = ft_itoa_positive(nbr);
	len = ft_strlen(n);
	dif = p->precision - len;
	handle_pad_int(p, dif, len, prefix);
	if (!p->got_width && !p->got_precision && !p->flags.minus)
		p->count += ft_print(prefix, false, 0);
	if (nbr > 0)
		p->count += ft_print(n, false, 0);
	else if (nbr == 0)
		p->count += ft_print("0", false, 0);
	if (p->got_width && p->flags.minus)
		handle_case_five(p, dif, len, prefix);
}