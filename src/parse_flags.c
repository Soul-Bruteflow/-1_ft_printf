/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 16:25:09 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	parse_flags(t_printf *p)
{
	while (ft_isflag(p->format, p->i) && p->format[p->i] != '\0')
	{
		if (p->format[p->i] == '-')
			p->flags.minus = true;
		else if (p->format[p->i] == '+')
			p->flags.plus = true;
		else if (p->format[p->i] == ' ')
			p->flags.space = true;
		else if (p->format[p->i] == '0')
			p->flags.zero = true;
		else if (p->format[p->i] == '#')
			p->flags.hashtag = true;
		if (p->flags.plus)
			p->flags.space = false;
		p->i++;
	}
	return (true);
}
