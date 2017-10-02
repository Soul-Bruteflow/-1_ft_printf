#include "ft_printf.h"

static void	handle_pad_int(t_printf *p, ssize_t dif, size_t len, char *pref)
{
	if (p->got_width && p->got_precision && !p->flags.minus)
		handle_case_one(p, dif, len, "");
	else if (p->got_precision && !p->flags.minus)
		handle_case_two(p, len, "");
	else if (p->got_width && p->flags.hashtag && !p->flags.minus)
		handle_case_three(p, len, pref);
	else if (p->got_width && !p->flags.minus)
		handle_case_three(p, len, "");
	if (p->flags.minus)
		handle_case_four(p, len, "");
}

void	handle_octal_uint(t_printf *p)
{
	char		*n;
	size_t		len;
	char		*pref;
	uintmax_t 	nbr;
	ssize_t		dif;

	pref = "0";
	nbr = get_number_by_len_unsigned(p);
	if (nbr == 0)
		pref = "";
	n = ft_basification(nbr, 8, false);
	len = ft_strlen(n);
	dif = p->precision - len;
	if (p->got_precision)
		p->flags.zero = false;
	handle_pad_int(p, dif, len, pref);
	p->count += ft_print(n, false, 0);
//	if (p->got_width && p->flags.minus && p->got_precision)
//		handle_case_five(p, dif, len, "");
	if (p->got_width && p->flags.minus)
		handle_case_five(p, dif, len, "");




//	if (p->flags.hashtag && nbr == 0 && p->got_precision && p->precision == 0)
//	{
//		if (p->got_width && !p->flags.minus)
//			p->count += print_prefix_pad(1, p->width, p->flags.zero ? '0' : ' ');
//		p->count += ft_print("0", false, 0);
//		if (p->got_width && p->flags.minus)
//			p->count += print_prefix_pad(1, p->width, ' ');
//		return ;
////		return (p->got_width ? ft_max(p->width, 1) : 1);
//	}
//	else if (p->flags.hashtag && nbr != 0)
//	{
//		p->got_precision = true;
//		p->precision = p->precision > len + 1 ? p->precision : (unsigned int)len + 1;
//		p->flags.zero = false;
//	}
//	if (p->got_width && !p->flags.minus && p->flags.zero)
//	{
//		if (p->got_precision)
//			p->precision = p->width > p->precision ? p->width : p->precision;
//		else
//			p->precision = p->width > len ? p->width : (unsigned int)len;
//		p->got_precision = true;
//		p->got_width = false;
//	}
////	nbrstrlen = ft_printf_calc_nbrstrlen(nbr, base, prefix, arg);
//	if (p->got_width && !p->flags.minus)
//		p->count += print_prefix_pad(len, p->width, ' ');
//	if (p->flags.hashtag && pref != NULL && nbr != 0)
//		p->count += ft_print(pref, false, 0);
//	p->count += ft_print(n, true, len);
////			ft_putnbrbp(nbr, base, arg, nbr_len);
//	if (p->got_width && p->flags.minus)
//		p->count += print_prefix_pad(len, p->width, ' ');
//
////	return (arg->got_width ? FT_MAX(nbrstrlen, arg->width) : nbrstrlen);
////	p->count += ft_print(ft_basification(va_arg(p->args, unsigned int), 8, false), false, 0);
}