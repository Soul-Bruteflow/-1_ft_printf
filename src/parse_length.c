/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_length.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 16:25:05 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		handle_len(t_printf *p)
{
	if (p->len >= p->tmp_len)
		return;
	else
		p->len = p->tmp_len;
}

t_bool			parse_length(t_printf *p)
{

	while (ft_islength(p->format, p->i) && p->format[p->i] != '\0')
	{
		if (p->format[p->i] == 'h')
		{
			if (p->tmp_len == h ||p->tmp_len == hh)
				p->tmp_len = p->tmp_len == h ? hh : h;
			else
				p->tmp_len = h;
		}
		else if (p->format[p->i] == 'l')
		{
			if (p->tmp_len == l || p->tmp_len == ll)
				p->tmp_len = p->tmp_len == l ? ll : l;
			else
				p->tmp_len = l;
		}
		else if (p->format[p->i] == 'j')
			p->tmp_len = j;
		else if (p->format[p->i] == 'z')
			p->tmp_len = z;
		if (p->len == none)
			p->len = p->tmp_len;
		else
			handle_len(p);
		p->i++;
	}
	return (true);
}
