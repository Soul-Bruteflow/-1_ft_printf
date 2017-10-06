/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:18:38 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 17:35:40 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_percent(t_printf *p)
{
	if (p->got_width && !p->flags.minus)
		p->count += print_prefix_pad(1, p->width,
		(char)(p->flags.zero ? '0' : ' '));
	p->count += ft_print("%", false, 0);
	if (p->got_width && p->flags.minus)
		p->count += print_prefix_pad(1, p->width, ' ');
}
