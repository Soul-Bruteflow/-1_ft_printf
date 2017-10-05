#include "ft_printf.h"

static void	handle_pad_base(t_printf *p, ssize_t dif, size_t len, char *pref)
{
	char *preft;

	preft = "";
	if (p->got_width && p->got_precision && !p->flags.minus)
	{
		if (p->flags.hashtag)
			preft = dif < 0 ? pref : "";
		handle_case_one(p, dif, len, preft);
	}
	else if (p->got_precision && !p->flags.minus && p->flags.hashtag)
	{
		handle_case_two(p, len, dif < 0 ? pref : "");
	}
	else if (p->got_width && p->flags.hashtag && !p->flags.minus)
		handle_case_three(p, len, pref);
	else if (p->got_width && !p->flags.minus)
		handle_case_three(p, len, "");
	else if (p->flags.hashtag && !p->flags.minus)
		p->count += ft_print(pref, false, 0);
	else if (p->got_precision && !p->flags.minus)
	{
		if (p->flags.hashtag)
			preft = dif > 0 ? pref : "";
		handle_case_two(p, len - ft_strlen(preft), preft);
	}
	if (p->flags.minus)
		handle_case_four(p, len, dif < 0 ? pref : "");
}

void	handle_bases(t_printf *p, char *pref, uint8_t base, t_bool size)
{
	char		*n;
	size_t		len;
	uintmax_t 	nbr;
	ssize_t		dif;
	char		*preft;

	preft = pref;
	nbr = get_number_by_len_unsigned(p);
	n = ft_basification(nbr, base, size);
	len = ft_strlen(n);
	dif = p->precision - len;
	if (nbr == 0)
	{
//		len = 0;
		pref = NULL;
	}
	if (p->got_precision)
		p->flags.zero = false;
	handle_pad_base(p, dif, len, pref);
	if (nbr == 0 && p->got_precision && p->precision == 0 && p->flags.hashtag && base == 8)
		p->count += ft_print(preft, false, 0);
	if (nbr > 0)
		p->count += ft_print(n, false, 0);
	else if (nbr == 0 && p->precision != 0 && p->got_precision)
		p->count += ft_print(n, false, 0);
	else if (nbr == 0 && !p->got_precision)
		p->count += ft_print(n, false, 0);
	if (p->got_precision && p->precision == 0 && nbr == 0)
		p->count += ft_print("", false, 0);
//		p->count += ft_print(n, false, 0);

	if (p->got_width && p->flags.minus)
		handle_case_five(p, dif, len, dif < 0 ? pref : "");
}