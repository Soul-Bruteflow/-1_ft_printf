/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 17:35:57 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_string(t_printf *p)
{
	char	*str;
	size_t	strlen;

	if (p->len == l)
	{
		handle_string_w(p);
		return ;
	}
	else
	{
		str = va_arg(p->args, char*);
		if (str == NULL)
			str = "(null)";
		strlen = p->got_precision
		? ft_strnlen(str, p->precision) : ft_strlen(str);
		if (p->got_width && !p->flags.minus)
			p->count += print_prefix_pad(strlen, p->width,
			p->flags.zero ? (char)'0' : (char)' ');
		p->count += ft_print(str, true, strlen);
		if (p->got_width && p->flags.minus)
			p->count += print_prefix_pad(strlen, p->width, ' ');
	}
}
