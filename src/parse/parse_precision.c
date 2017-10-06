/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 16:24:57 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_precision(t_printf *p)
{
	if (p->format[p->i] == '.')
	{
		p->got_precision = true;
		p->i++;
		while (ft_isdigit(p->format[p->i]) && p->format[p->i] != '\0')
		{
			p->precision = p->precision * 10 + p->format[p->i] - '0';
			p->i++;
		}
	}
}
