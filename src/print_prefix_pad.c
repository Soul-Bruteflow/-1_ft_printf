/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_prefix_pad.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 16:23:30 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_prefix_pad(size_t nbrstrlen, ssize_t width, char padchar)
{
	ssize_t dif;
	ssize_t i;

	i = 0;
	dif = width - nbrstrlen;
	if (dif > 0)
	{
		while (i < dif)
		{
			write(1, &padchar, 1);
			i++;
		}
	}
	return ((size_t)i);
}
