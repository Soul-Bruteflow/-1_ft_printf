/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:06:54 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 17:35:34 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_int_long(t_printf *p)
{
	if (p->len == none)
		p->len = l;
	p->is_signed = true;
	handle_numbers(p);
}
