/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:05:21 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 17:35:44 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		handle_pad_base(t_printf *p, t_bool *isp, size_t len, char *pre)
{
	ssize_t		dif;

	if (p->got_precision && p->got_width && !p->flags.minus)
	{
		dif = p->precision - len;
		handle_case_one(p, dif, len, pre);
		*isp = true;
	}
	else if (p->got_precision && !p->flags.minus)
	{
		p->count += ft_print(pre, false, 0);
		*isp = true;
		p->count += print_prefix_pad(len, p->precision, '0');
	}
	else if (p->got_width && !p->flags.minus && !p->flags.zero)
		p->count += print_prefix_pad(len + 2, p->width, ' ');
	else if (p->got_width && p->flags.zero)
	{
		p->count += ft_print(pre, false, 0);
		*isp = true;
		p->count += print_prefix_pad(len + 2, p->width, '0');
	}
}

void			handle_pointer(t_printf *p)
{
	char			*n;
	size_t			len;
	char			*prefix;
	t_bool			is_pref_printed;
	uintmax_t		nbr;

	prefix = "0x";
	is_pref_printed = false;
	nbr = va_arg(p->args, uintmax_t);
	n = ft_basification(nbr, 16, false);
	len = ft_strlen(n);
	handle_pad_base(p, &is_pref_printed, len, prefix);
	if (!is_pref_printed)
		p->count += ft_print(prefix, false, 0);
	if (nbr > 0)
		p->count += ft_print(n, false, 0);
	else if (nbr == 0 && p->precision != 0 && p->got_precision)
		p->count += ft_print("0", false, 0);
	else if (nbr == 0 && !p->got_precision)
		p->count += ft_print("0", false, 0);
	if (p->got_width && p->flags.minus)
		p->count += print_prefix_pad(len + 2, p->width, ' ');
}
