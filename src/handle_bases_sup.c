/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_bases_sup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 12:47:02 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/13 12:49:09 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	width_precision(t_printf *p, ssize_t dif, size_t len, char *pref)
{
	if (p->base == 16)
		pref = p->flags.hashtag ? pref : "";
	else if (p->base == 8)
		pref = handle_pref_less(p, pref, dif);
	handle_case_one(p, dif, len, pref);
}
