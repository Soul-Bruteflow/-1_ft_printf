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

t_bool		parse_length(t_printf *p)
{
	while (ft_islength(p->format, p->i) && p->format[p->i] != '\0')
	{
		if (p->format[p->i] == 'h')
		{
			if (p->len == h || p->len == hh)
				p->len = p->len == h ? hh : h;
			else
				p->len = h;
		}
		else if (p->format[p->i] == 'l')
		{
			if (p->len == l || p->len == ll)
				p->len = p->len == l ? ll : l;
			else
				p->len = l;
		}
		else if (p->format[p->i] == 'j')
			p->len = j;
		else if (p->format[p->i] == 'z')
			p->len = z;
		p->i++;
	}
	return (true);
}
