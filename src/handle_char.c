/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 17:35:15 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_char(t_printf *p)
{
	if (p->len == l)
		return (handle_char_w(p));
	else
	{
		if (p->got_width && !p->flags.minus)
			p->count += print_prefix_pad(1, p->width,
			(char)(p->flags.zero ? '0' : ' '));
		ft_putchar((char)(va_arg(p->args, int)));
		p->count += 1;
		if (p->got_width && p->flags.minus)
			p->count += print_prefix_pad(1, p->width, ' ');
	}
}
