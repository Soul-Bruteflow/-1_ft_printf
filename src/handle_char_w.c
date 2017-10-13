/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char_w.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 17:35:12 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_char_w(t_printf *p)
{
	wchar_t		chr;
	unsigned	chr_len;

	chr = (wchar_t)va_arg(p->args, wint_t);
	if (chr <= 0x7F)
		chr_len = 1;
	else if (chr <= 0x7FF)
		chr_len = 2;
	else if (chr <= 0xFFFF)
		chr_len = 3;
	else if (chr <= 0x10FFFF)
		chr_len = 4;
	else
		chr_len = 0;
	if (p->got_width && !p->flags.minus)
		p->count += print_prefix_pad(chr_len, p->width,
		(char)(p->flags.zero ? '0' : ' '));
	p->count += ft_putwchar(chr);
	if (p->got_width && p->flags.minus)
		p->count += print_prefix_pad(chr_len, p->width,
		(char)(p->flags.zero ? '0' : ' '));
}
