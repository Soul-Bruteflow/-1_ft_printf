/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_bases.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 13:35:36 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 16:28:35 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_minus_case(t_printf *p, char *pref, ssize_t dif, size_t len)
{
	if (p->flags.minus)
	{
		pref = handle_pref_less(p, pref, dif);
		handle_case_four(p, len, pref);
	}
}

static void	handle_pad_base(t_printf *p, ssize_t dif, size_t len, char *pref)
{
	if (p->got_width && p->got_precision && !p->flags.minus)
	{
		pref = handle_pref_less(p, pref, dif);
		handle_case_one(p, dif, len, pref);
	}
	else if (p->got_precision && !p->flags.minus && p->flags.hashtag)
	{
		if (p->base == 8)
			pref = dif < 0 ? pref : "";
		handle_case_two(p, len, pref);
	}
	else if (p->got_width && p->flags.hashtag && !p->flags.minus)
		handle_case_three(p, len, pref);
	else if (p->got_width && !p->flags.minus)
		handle_case_three(p, len, "");
	else if (p->flags.hashtag && !p->flags.minus)
		p->count += ft_print(pref, false, 0);
	else if (p->got_precision && !p->flags.minus)
	{
		pref = handle_pref_greater(p, pref, dif);
		handle_case_two(p, len - ft_strlen(pref), pref);
	}
	handle_minus_case(p, pref, dif, len);
}

static void	handle_number_print(t_printf *p, const char *n, uintmax_t nbr)
{
	if (nbr > 0)
		p->count += ft_print(n, false, 0);
	else if (nbr == 0 && p->precision != 0 && p->got_precision)
		p->count += ft_print(n, false, 0);
	else if (nbr == 0 && !p->got_precision)
		p->count += ft_print(n, false, 0);
}

static void	handle_end_spaces(t_printf *p, ssize_t dif, size_t len, char *pref)
{
	if (p->got_width && p->flags.minus)
	{
		if (p->flags.hashtag)
			pref = dif < 0 ? pref : "";
		else
			pref = "";
		handle_case_five(p, dif, len, pref);
	}
}

void		handle_bases(t_printf *p, char *pref, uint8_t base, t_bool size)
{
	char		*n;
	size_t		len;
	uintmax_t	nbr;
	ssize_t		dif;
	char		*preft;

	preft = pref;
	nbr = get_number_by_len_unsigned(p);
	n = ft_basification(nbr, base, size);
	len = ft_strlen(n);
	dif = p->precision - len;
	number_zero(p, nbr, &len, &pref);
	if (p->got_precision)
		p->flags.zero = false;
	handle_pad_base(p, dif, len, pref);
	if (nbr == 0 && p->got_precision && p->precision == 0
		&& p->flags.hashtag && base == 8)
		p->count += ft_print(preft, false, 0);
	handle_number_print(p, n, nbr);
	if (p->got_precision && p->precision == 0 && nbr == 0)
		p->count += ft_print("", false, 0);
	handle_end_spaces(p, dif, len, pref);
}
