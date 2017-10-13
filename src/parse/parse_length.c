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

static void	oneltter_len(t_printf *p)
{
	if (p->format[p->i] == 'h')
		p->len = h;
	else if (p->format[p->i] == 'l')
		p->len = l;
	else if (p->format[p->i] == 'j')
		p->len = j;
	else if (p->format[p->i] == 'z')
		p->len = z;
}

t_bool		parse_length(t_printf *p)
{
	while (ft_islength(p->format, p->i) && p->format[p->i] != '\0')
	{
		if (p->format[p->i] == 'h' && p->format[p->i + 1] == 'h')
		{
			p->len = hh;
			p->i += 2;
			continue;
		}
		else if (p->format[p->i] == 'l' && p->format[p->i + 1] == 'l')
		{
			p->len = ll;
			p->i += 2;
			continue;
		}
		else if (p->format[p->i] == 'h' || p->format[p->i] == 'l'
		|| p->format[p->i] == 'j' || p->format[p->i] == 'z')
		{
			oneltter_len(p);
			p->i++;
		}
	}
	return (true);
}
