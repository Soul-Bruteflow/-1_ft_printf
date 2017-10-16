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

void		handle_len(t_printf *p, t_len *tmp_len)
{
	if (p->len >= *tmp_len)
		return;
	else
		p->len = *tmp_len;
}

t_bool		parse_length(t_printf *p)
{
	t_len tmp_len;

	tmp_len = none;
	while (ft_islength(p->format, p->i) && p->format[p->i] != '\0')
	{
		if (p->format[p->i] == 'h')
		{
			if (p->len == h || p->len == hh)
				tmp_len = p->len == h ? hh : h;
			else
				tmp_len = h;
		}
		else if (p->format[p->i] == 'l')
		{
			if (p->len == l || p->len == ll)
				tmp_len = p->len == l ? ll : l;
			else
				tmp_len = l;
		}
		else if (p->format[p->i] == 'j')
			tmp_len = j;
		else if (p->format[p->i] == 'z')
			tmp_len = z;
		p->i++;
	}
	if (p->len == none)
		p->len = tmp_len;
	else
		handle_len(p, &tmp_len);
	return (true);
}
