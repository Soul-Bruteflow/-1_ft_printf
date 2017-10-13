/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islength.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 15:38:01 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	ft_islength(const char *format, size_t i)
{
	if (format[i] != '\0' && (format[i] == 'h' || format[i] == 'l'
		|| format[i] == 'j' || format[i] == 'z'))
		return (true);
	else if (format[i] != '\0' && format[i + 1] != '\0' &&
			((format[i] == 'h' && format[i + 1] == 'h') ||
			(format[i] == 'l' && format[i + 1] == 'l')))
		return (true);
	return (false);
}
