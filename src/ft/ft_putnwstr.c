/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:56:12 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 15:37:49 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include "ft_printf.h"

size_t	ft_print_wstr(const wchar_t *print, t_bool is_len, size_t l)
{
	size_t	i;
	size_t len;

	if(!print)
		return (0);
	if (is_len)
		len = l;
	else
		len = ft_wstrlen(print);
	i = 0;
	while (*print && i < len)
	{
		if (*print <= 0x7F)
			i++;
		else if (*print <= 0x7FF)
			i += 2;
		else if (*print <= 0xFFFF)
			i += 3;
		else if (*print <= 0x10FFFF)
			i += 4;
		if (i <= len)
			ft_putwchar(*print++);
	}
	return (len);
}