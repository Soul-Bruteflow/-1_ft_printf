/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string_w.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 16:18:32 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 17:35:48 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	calc_wstrlen(wchar_t *str, int precision, size_t i)
{
	if (*str == '\0' || precision == 0)
		return (i);
	else if (*str <= 0x7F)
		return (calc_wstrlen(str + 1, precision - 1, i + 1));
	else if (*str <= 0x7FF && precision >= 2)
		return (calc_wstrlen(str + 1, precision - 2, i + 2));
	else if (*str <= 0xFFFF && precision >= 3)
		return (calc_wstrlen(str + 1, precision - 3, i + 3));
	else if (*str <= 0x10FFFF && precision >= 4)
		return (calc_wstrlen(str + 1, precision - 4, i + 4));
	else
		return (i);
}

void			handle_string_w(t_printf *p)
{
	wchar_t			*str;
	size_t			strlen;

	str = va_arg(p->args, wchar_t*);
	if (str == NULL)
		str = L"(null)";
	strlen = p->got_precision
	? calc_wstrlen(str, p->precision, 0) : ft_wstrlen(str);
	if (p->got_width && !p->flags.minus)
		p->count += print_prefix_pad(strlen, p->width,
		p->flags.zero ? (char)'0' : (char)' ');
	p->count += ft_putnwstr(str, true, strlen);
	if (p->got_width && p->flags.minus)
		p->count += print_prefix_pad(strlen, p->width, ' ');
}
