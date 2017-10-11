/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isconversion_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 15:38:12 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	ft_isconversion_char(const char *format, size_t i)
{
	if (format[i] != '\0' && ((format[i] == 's' || format[i] == 'S' ||
		format[i] == 'p' || format[i] == 'd' || format[i] == 'i') ||
		format[i] == 'D' || format[i] == 'o' || format[i] == 'O' ||
		format[i] == 'u' || format[i] == 'U' || format[i] == 'x' ||
		format[i] == 'X' || format[i] == 'c' || format[i] == 'C' ||
		format[i] == '%'))
		return (true);
	return (false);
}

t_bool	ft_isconv_char(const unsigned char c)
{
	if (c != '\0' && ((c == 's' || c == 'S' || c == 'p' || c == 'd'
	|| c == 'i') || c == 'D' || c == 'o' || c == 'O' || c == 'u'
	|| c == 'U' || c == 'x' || c == 'X' || c == 'c' || c == 'C' || c == '%'))
		return (true);
	return (false);
}
