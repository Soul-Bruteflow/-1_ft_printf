/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 16:24:54 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	parse_width(t_printf *p)
{
	p->width = 0;
	if (ft_isdigit(p->format[p->i]))
	{
		p->got_width = true;
		while (ft_isdigit(p->format[p->i]) && p->format[p->i] != '\0')
		{
			p->width = p->width * 10 + p->format[p->i] - '0';
			p->i++;
		}
	}
	return (true);
}
