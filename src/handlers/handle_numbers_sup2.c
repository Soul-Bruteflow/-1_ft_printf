/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_numbers_sup2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 17:31:52 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 17:34:39 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*handle_pref_less(t_printf *p, char *pref, ssize_t dif)
{
	if (p->flags.hashtag)
		pref = dif > 0 ? pref : "";
	else
		pref = "";
	return (pref);
}

char	*handle_pref_greater(t_printf *p, char *pref, ssize_t dif)
{
	if (p->flags.hashtag)
		pref = dif > 0 ? pref : "";
	else
		pref = "";
	return (pref);
}

void	number_zero(t_printf *p, uintmax_t nbr, size_t *len, char **pref)
{
	if (nbr == 0 && p->got_precision && p->precision == 0)
	{
		*len = 0;
		*pref = NULL;
	}
	else if (nbr == 0 && p->flags.hashtag)
	{
//		*len = 0;
		*pref = NULL;
	}
}
